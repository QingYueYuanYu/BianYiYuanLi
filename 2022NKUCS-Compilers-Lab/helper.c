#include <stdio.h>
// #include <iostream>
// #include <map>
// #include <string>
// #include <vector>
// using namespace std;
// struct M{
// 		int m;
// };
int main(){
	// map<string,vector<int> > Map;
	// vector<int> vec1;
	// vector<int> vec2;
	// vec1.push_back(1);
	// vec2.push_back(2);
	// Map["1"] = vec1;
	// Map["2"] = vec2;
	// map<string,vector<int> >::iterator itMap;
	// for(itMap=Map.begin();itMap!=Map.end();itMap++){
	// 	printf("Can I come in? \n");
	// 	printf("%s",itMap->first.c_str());
	// 	printf("\n");
	// 	vector<int> vec;
	// 	for(itVec=(itMap->second).begin();itVec!=(itMap->second).end();itVec++){
	// 		// printf(itVec->identifier);
	// 		// printf("\n");
	// 		printf("Can I come in2? \n");
	// 		printf("%d",*itVec);
	// 		printf("\n");
	// 		if(*itVec > 0){
	// 			itVec = (itMap->second).erase(itVec);
	// 		}
	// 	}
	// }
	char content[100];
	sprintf(content,"%-10s","INT");
	sprintf(content,"%-10s %-10s",content,"int");	
	printf(content);
	printf("\n");
	printf("%%");
	return 0;
}
