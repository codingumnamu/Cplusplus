/*	�����̵� Ű�� ��� �� ���Ѵ�����
	
*/

#include <iostream>
#include <algorithm>
using namespace std;

int a[9];			// �����̵� �迭
int n = 9;			// �����̵� ��� 9���� ���������� ����

int main() {

	int sum = 0;	// �����̵� Ű�� �� ������ sum ���� �� �ʱ�ȭ
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];	// �����̵� Ű �Է� ����
		sum += a[i];	// sum�� �����̵� Ű ��� ����
	}
	
	sort(a, a + n);
	/* sort�Լ��� �⺻������ ������������ �������ش�.
		STL Pair�� ���ĺ� ���ĵ� �����ϴ�.
		https://www.acmicpc.net/blog/view/22 ����
		a[n]�̸� sort(a, a+n)�̶�� �Ἥ �����ϸ� �ȴ�.
	*/
	
	/* ������������ ���������ϱ� �տ� �� ���ؼ� 100�������
		100����� ���� �ڿ� 2�� ���ָ� �ȴ�.
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