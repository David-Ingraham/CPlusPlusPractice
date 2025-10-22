#include <iostream>
#include <vector>
#include <algorithm>
#include <omp.h>



bool isPalindrome(int x);

std::vector<std::vector <int>>* getPalindromeSums(int range);

std::vector<std::vector <int>> collapsePermutations(std::vector<std::vector <int>>* sums);



int main (){
	

	std::vector<std::vector<int>>* permutationsOfSums =  getPalindromeSums(65536);

	

	auto combinationsOfSums = collapsePermutations(permutationsOfSums);


	std::string permutations = "";
	std::string combinations = "";




	std::cout << "\n\n\npermutations\n\n\n";
	for (auto sum : *permutationsOfSums){

		std::string permutation = " [";
	
		for (int value : sum){
			permutation = permutation  + std::to_string(value) + " ";
		}

		permutation[permutation.length()-1] = ']';
		permutation = permutation + '\n';

		permutations = permutations + permutation; 
	}

	std::cout << "\n\n\n\ncombination\n\n\n";
	for (auto sum : combinationsOfSums){

		std::string combination = " [";
	
		for (int value : sum){
			combination = combination  + std::to_string(value) + " ";
		}

		combination[combination.length()-1] = ']';
		combination = combination + '\n'; 

		combinations = combinations + combination; 
	}


	std::cout << "Permutaions : \n";
	std::cout << permutations << "\n";
	std::cout << "combinations : \n";
	std::cout << combinations  << "\n";
	delete permutationsOfSums;


}



std::vector<std::vector <int>> collapsePermutations(std::vector<std::vector <int>>* sums){


	for (std::vector<int>& palinSum : *sums){
	
			std::sort(palinSum.begin(), palinSum.end());
	}

	sums->erase(std::unique(sums->begin(), sums->end()), sums->end());

	return *sums;


}


std::vector<std::vector <int>>* getPalindromeSums(int range){
	std::vector <int> nums;
	std::vector <std::vector <int>>* sums = new std::vector<std::vector<int>>();

	for(int i =0; i < range; i++ ){

		if (isPalindrome(i)){
		nums.push_back(i);
		}
	}

	#pragma omp parallel for
	for (int x : nums){
		for (int y : nums){
			int k = range - x + y;

			if (k >= 0 && isPalindrome(k)){  //replaced inner most loop
			//std::cout << x << " + " << y <<  " + " << k << " equals " << range << std::endl;
			//std::cout << "\n****************************************************\n";
			std::vector<int> sum = {x,y,k}; 
			sums->push_back(sum);
			
			}
			
		}		

	}

	return sums;
}
	

 bool isPalindrome(int x){
           if (x < 10) return true;
		   std::string str = std::to_string(x);
             for (int i = 0; i < str.length() / 2; i++) {
                   if (str[i] != str[str.length() - i - 1]) {
                           return false;
                    }
           }
           return true;
 
   }
