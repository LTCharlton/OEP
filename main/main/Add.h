#pragma once



class Add {
public:
	Add(int, int);
	int GetSum();
private:
	int sum;
	int a;
	int b;
};

Add::Add(int x, int y) {
	sum = x + y;

}
int Add::GetSum(){
	return sum;
}