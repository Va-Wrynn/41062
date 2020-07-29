#include<iostream>
using namespace std;
struct TREE{
	int l,r;
	bool p;
}tree[20];
int n;

void input_(){
	fin>>n;
	for(int i = 1;i <= n; i++){
		fin>>tree[i].l>>tree[i].r;
		if(tree[i].l || tree[i].r) tree[i].p = true; 
	}
}

int main(){
	input_();
	
	
	
	return 0;
} 
