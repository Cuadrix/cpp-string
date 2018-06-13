#include "string.h"
#include <stdio.h>
#include <time.h>

#include <string>
#include <iostream>
 
int main() {
	/*
	string32 a(U"fuck ᧥	᧦	᧧	᧨	᧩	᧪	᧫	᧬	᧭	᧮");
	//getchar();
	a.assign(U"fuck it");
	string32 b; b.assign(U'᧮', 100);
	std::u32string d; b.assign(U'᧮', 100);
	//std::u32string b(U"fuck it");
	*/ 
	std::string *xx = new std::string("Hello world!");
	//std::u32string *b = new std::u32string(U"n");
	str::string *victor = new str::string("Victor");
	const str::string sebastian = "Sebastian";
	str::string32 gg = { U'k', 10 };
	str::string32 b(U"I want your grexen xappxle");
	str::string32 e(U"I want your ass right now", 2, 13);
	//std::cout << victor->c_str() << std::endl;
	//(*victor)[2] = 'x';
	//std::cout << victor->c_str() << std::endl;
	//std::cout << sebastian.first() << " " << sebastian.last() << std::endl;
	//sebastian->first() = 'H'; sebastian->last() = 'w';
	//std::cout << sebastian.first() << " " << sebastian.last() << std::endl;
	/*
	for (std::string::reverse_iterator iter = xx.rbegin(); iter != xx.rend(); ++iter) {
		std::cout << *iter;
	}
	*/
	//a->insert(*a, 0, 0);
	//a.replace(str::string32(U""), 9, 4);
	//a.replace(U"Hello", 0, 3);
	//if (a->compare(U"green apple") != 0) {
	//	std::cout << "a is not a green apple" << std::endl;
	//}
	//if (a->compare(b, 0, 5, 0, 5) != 0) {
		//std::cout << "but they dont have the same color" << std::endl;
	//}
	//a->replace(U'j', U'l', 0, 5);
	//a->replace(U"Hello", U"Goodbye᧮");
	//std::cout << (a >= U"Roses are not") << std::endl;
	//a->remove(U' ', 0, 1200);
	//std::cout << b.find(U'x', 8, 10) << std::endl;
	//a->remove(0x00);
	//a->insert(U'n', 10);
	//a->insert(U't', 12);
	//a->insert(U' ', 13);
	//a->reverse(0, 1);
	//a->reserve(10000000);
	// OPTIONAL: string32 f(b.begin() + 4, b.end() + 9);
	//std::string f(gg.begin() + 4, gg.end());
	//for (string32::const_iterator iter = a->cbegin() + 4; iter != a->cend() - 1; ++iter) {
		//std::cout << *iter << std::endl;
	//}
	//for (auto const &it : *a) {
		//std::cout << it << std::endl;
	//}
	//std::cout << "Last: " << a->last() << std::endl;
	//a->substr(0, 2000);
	//a->clear();
	//a->insert(U"You are not good", 9, 7);
	//a->insert(U" baby", a->length() - 1);
	//a->insert(*a, 14, 0, a->length());
	//string32 *b = new string32(U"I wa");
	//a->swap(*b);
	//a->assign(*b, 0, 100);
	//a->append(*b);
	//a->append(U"Are you my love?", 10);
	//a.reserve(1000000);
	//std::cout << "Time: " << (double)(clock() - 0) / CLOCKS_PER_SEC << std::endl;
	//a->append(U"red poodles", 0, 3);
	//a->insert(*a, 10);
	//clock_t c = clock();
	//for (int i = 0; i < 100001; i++) {
		//victor->append(U'ö');
	//}
	//std::cout << "Time: " << (double)(clock() - c) / CLOCKS_PER_SEC << std::endl;
	//a->resize(10, U'g');
	//a->reset();
	//a->append(U'z', 10);
	//a->at(0) = U'ä';
	//bool f = a->at(U'ä', 1); 
	//a->shrink();
	//getchar();
	getchar();
	//delete a;
	delete victor;

	getchar();
	return 0;
}