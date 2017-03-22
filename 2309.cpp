/*	난쟁이들 키를 모두 다 더한다음에
	
*/

#include <iostream>
#include <algorithm>
using namespace std;

int a[9];			// 난쟁이들 배열
int n = 9;			// 난쟁이들 명수 9명을 전역변수로 설정

int main() {

	int sum = 0;	// 난쟁이들 키의 합 저장할 sum 선언 및 초기화
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];	// 난쟁이들 키 입력 받음
		sum += a[i];	// sum에 난쟁이들 키 모두 합함
	}
	
	sort(a, a + n);
	/* sort함수는 기본적으로 오름차순으로 정렬해준다.
		STL Pair랑 알파벳 정렬도 가능하다.
		https://www.acmicpc.net/blog/view/22 참고
		a[n]이면 sort(a, a+n)이라고 써서 정렬하면 된다.
	*/
	
	/* 오름차순으로 정렬했으니까 앞에 꺼 합해서 100만들고나서
		100만들고 남는 뒤에 2개 빼주면 된다.
	*/
	for (int i = 0; i < n; i++) {

		for (int j = i + 1; j < n; j++) {
		
			if (sum - a[i] - a[j] == 100) {
				
				for (int k = 0; k < n; k++) {
					if (i == k || j == k) continue;
					cout << a[k] << '\n';
				}

				return 0;
			}
		}
	}
	return 0;
}