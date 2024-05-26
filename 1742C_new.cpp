#include <iostream>
#include <string>
int main(){
	
	int k;
	std::cin >> k;
	getc(stdin);	
	for (int i = 0; i < k; i++){
		char ans = 'B';
		std::string s;
		std::getline(std::cin, s);
		
		for (int j = 0; j < 8; j++){
			int countR = 0;
			std::getline(std::cin, s);
			
			for (int c = 0; c < 8; c++){
				if (s[c] == 'R'){
					countR++;
				}
			}

			if (countR == 8){
				ans = 'R';
			}
		}
		std::cout << ans << '\n';
	}	
}






