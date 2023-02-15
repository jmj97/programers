#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>

#include <string>
#include <vector>
#include <iostream>
#include <sstream> 
using namespace std;

string solution7(string my_string, string letter) {
	string answer;
	while (my_string.find(letter) != string::npos) {
		size_t idx = my_string.find(letter);
		string answer = my_string.erase(idx,1);
	}
    return answer;
}
///< prb1
void printTriangle() {
	int n;
	 scanf("%d", &n);
	 for (int i = 0; i < n; i++) {
		 for (int j = 0; j <= i; j++) {
			 printf("*");
		 }
		 for (int k = n - i - 1; k > 0; k--) {
			 printf(" ");
		 }
		 printf("\n");
	 }
}

//< pro2
int* solution(int arr[], size_t size) {
	int odd=0;
	int *result = (int*)malloc(sizeof(int)*2);
	for (int i=0;i<size;i++) {
		if (arr[i] % 2) {
			odd++;
		}
		else{}
	}
	result[0] = (int)size-odd;
	result[1]=odd;

	return result;
}
///< pro3
void iterNum() {
	char arr[5];
	int n=0,j=0,a=0;
	
	scanf("%s %d",arr,&n);
	int num = sizeof(arr)/sizeof(char);
	char *answer = (char*)malloc(sizeof(char)* n *5);
	for(int i=0;i<num*n;i++){
        answer[i] = arr[i/n];
    }
	printf("%s",answer);
}
///<pro4
void remove() {
	char a;
	char arr[100];
	int j=0;
	scanf("%s %c",arr,&a);
	int leng = sizeof(arr)/sizeof(char);
	char* answer = (char*)malloc(sizeof(char)*leng);
	for (int i = 0; i < leng; i++) {
		if(arr[i]!=a){
			answer[j++]=arr[i];
		}
	}
	printf("%s",answer);
}
int sumEven() {
	int n;
	int sum=0;
	scanf("%d",&n);
	for (int i = 1; i == n; i++) {
		if (i % 2 != 0) {
			sum+=i;
		}
	}
}
void calculate() {
	int yang,eem;
	scanf("%d %d",&yang,&eem);
	int total = 0;
	total = yang*12000+2000*(eem-yang/10);
}
void angle() {
	int angle, answer = 0;
	scanf("%d",&angle);
	if((angle>0)&&(angle<90)) answer=1;
	else if(angle==90) answer=2;
	else if(angle<180) answer=3;
	else if (angle==180)answer=4;
}
int* slicing(int *arr,size_t len, int num1, int num2) {
	int* answer =(int*)malloc(sizeof(int)*(int)len);
	for (int i = num1; i <= num2; i++) {
		answer[i-num1] = arr[i];
	}
	return answer;
}

char* solution2(int age) {

    //char* answer = (char*)malloc(1*4);
	char answer[4]={ };
	//memset(answer,0,sizeof(answer));
	char arr[10]={'a','b','c','d','e','f','g','h','i','j'};
	int idx = 0;
	int iter = 0;
	for (int i = 10; age > 1;) {
		printf("%d\n",age);
		answer[idx] = arr[age%10];
		age=(age/10);
		printf("%c ",answer[idx]);
		idx++;
	}
	printf("idx %d\n",idx);
	//for (int i = idx - 1; i >= idx/2; i--) {
	//	char temp = answer[i];
	//	answer[i] = answer[idx-1-i];
	//	answer[idx-1-i]=answer[i];
	//}
	char* reanswer = (char*)malloc(sizeof(char)*idx);
	memset(reanswer,0,idx);
	//printf("the val is %d and pointer size is : %d\n",sizeof(char)*idx, sizeof(reanswer));
	for (int i = 0; i < idx; i++) {
		printf("idx:%d\n",i);
		reanswer[idx-1-i]= answer[i];
	}
	for (int i = 0; i < idx; i++) {
		printf("the answer in func is : %c\n",reanswer[i]);
	}
	printf("\n");

    return reanswer;
}
//<day7-1
char* solution(const char* my_string, const char* letter) {
	
	char* answer = (char*)malloc(1);
    return answer;
}
string solution1(string my_string, string letter) {
    string answer = "";
	while(my_string.find(letter) != std::string::npos)
		my_string.erase(my_string.find(letter),1);
	answer = my_string;
    return answer;
}
//8-2
string solution82(int age) {
    string answer = "";
	string ref="abcdefghij";
	if(age<=9) answer.push_back(ref[age]);
	else if (age <= 99) {
		answer.push_back(ref[age/10]);
		answer.push_back(ref[age%10]);
	}
	else if (age <= 999) {
		answer.push_back(ref[age/100]);
		age-=(age/100) *100;
		answer.push_back(ref[age/10]);
		answer.push_back(ref[age%10]);
	}else answer ="baaa";
    return answer;
}
// day8-4
int solution(int n) {
    int answer = 0;
	for (int i = 1; i <= n; i++) {
		if (n%i == 0)
			answer++;
	}
    return answer;
}
// 9-1
int solution91(int hp) {
    int answer = 0;
	answer = hp/5;
	hp = hp%5;
	answer = hp/3;
	hp=hp%3;
	answer+=hp;
    return answer;
}
string solution92(string letter) {
    string answer = "";
	vector<string> ref = {".-","-...","-.-.","-..",".","..-.","--.", \
		"....","..",".---","-.-",".-..","--","-.","---",".--.", \
		"--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	int a = 1;
	a = (int)letter.find(' ');
	for (int i=0;i<ref.size();i++) {
		if(letter.substr(0,a) == ref[i])
			answer.push_back((char)97+i);
	}
	
	int b=0;
	while (1) {
		cout << letter<<endl;
		a = (int)letter.find(' ',b);
		b = (int)letter.find(' ', a+1);
		cout<<"a,b " << a << ", " << b<<endl;
		if (b == string::npos) {
			for (int i=0;i<ref.size();i++) {
				if(letter.substr(a+1,b-a) == ref[i]){
					answer.push_back((char)97+i);
					break;}	
			}
			break;
		}
		else {}
		for (int i=0;i<ref.size();i++) {
			if(letter.substr(a+1,b-a-1) == ref[i])
			{	answer.push_back((char)97+i);
			break;}
		}
	}
    return answer;
}

// 9-2
string solution921(string letter) {
	stringstream stream(letter);
	string s;
	string answer="";
	vector<string> ref = {".-","-...","-.-.","-..",".","..-.","--.", \
		"....","..",".---","-.-",".-..","--","-.","---",".--.", \
		"--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	while (!stream.eof()) {
		stream>>s;
		auto t=find(ref.begin(),ref.end(),s);
		if(t != ref.end()){
			answer.push_back((char)(97+find(ref.begin(),ref.end(),s)-ref.begin()));
		}
	}
	return answer;
}
string solution93(string rsp) {
	vector<pair<char,char>>map;
	map.push_back(make_pair('0','5'));
	map.push_back(make_pair('2','0'));
	map.push_back(make_pair('5','2'));
    string answer = "";
	char a;
	stringstream str(rsp);
	while (str >> a) {
		
		cout << "input" << rsp<< " a " << a << endl;
			for (int i = 0; i < map.size(); i++) {
			if(map[i].first == a)
				answer.push_back(map[i].second);
		}
	}
    return answer;
}
int gcd(int a, int b) 
{ 
	int mod = a % b;
    
	while (mod > 0)
	{
		a = b;
		b = mod;
		mod = a % b;
	}
	
    return b;
}
//9-4
int solution94(int balls, int share) {
    int answer =1;
	int ja=1, mo=1;
	
	for (int i = 0; i < share; i++) {
		mo*=(share-i);
		ja *=(balls-i);
		int vv=gcd(mo,ja);
		cout << "ja, mo, vv = "<<ja<<", "<<mo<<", "<<vv<<endl;

		mo /= vv;
		ja /=vv;
		answer = (ja/mo);
		cout << "ja, mo, ans = "<<ja<<", "<<mo<<", "<<answer<<endl;
	}
	
    return answer;
}
vector<int> solution83(vector<int> emergency) {
    vector<int> answer(101),anw;
	for (int i = 0; i <= emergency.size(); i++) {
		answer[emergency[i]] = 1;
	}
	int cnt=1;
	for (int i = 100; i >= 1; i--) {
		if (answer[i] == 1) {
			answer[i]=cnt++;
		}
	}
	for (int i = 0; i < emergency.size(); i++) {
		anw.push_back(answer[emergency[i]]);
	}
    return anw;
}
int solution(vector<int> dot) {
    int answer = 0;
	if (dot[0] * dot[1] > 0) {
		if(dot[0]>0)answer=1;
		else answer=3;
	}
	else {
		if(dot[1]>0)answer=2;
		else answer=4;
	}
    return answer;
}
vector<int> solution113(vector<int> numbers) {
    int answer = 0,max=0;
	vector<int>arr,ere(numbers.size());
	
	for (int i = 0; i < numbers.size(); i++) {
		for (int j = i; j < numbers.size(); j++) {
			if (max < numbers[j]) {
				max = numbers[j];
				ere[i]=max;
				numbers[j] = ere[i];
			}
		}
	}
	answer = ere[numbers.size()-1]* ere[numbers.size()-2];
    return ere;
}
int solution111(vector<int> box, int n) {
    int answer = 1;
	for (auto i : box) {
		answer *= (i/n);
	}
	
	return answer;
}
vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
	for (int i = 0; i < (num_list.size() / n); i++) {
		answer[i]= 
	}
    return answer;
}
int main(void) {
	//printTriangle();
  // iterNum();
    //remove();
	//int arr[6]={1,2,3,4,5};
	//int* s = slicing(arr,sizeof(arr)/sizeof(int),2,4);
	//char* sol = solution2(23);
	//printf("the answer is : %s",sol);
	string a= solution921(".... . .-.. .-.. ---");
	string b= solution93("2005");
	int aa = solution94(30,15);
	cout << aa <<endl;
	vector<int> bb =solution113({30, 10, 23, 6, 100});
	for(auto i:bb)
	cout<<"string : " << i <<endl;
    return 0;
}