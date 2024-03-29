#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input(){
	while (true) 
    {
		cout << " Masukan banyaknya elemen pada array : "; // menampilkan ke layar
		cin >> n; // input dari user
		if (n <= 20) // jika kurang atausama dengan 20
			break; // keluar dari loop
		else
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // menampilkan ke layar
    }
	cout << "\n=====================" << endl;
	cout << "\nMasukan Elemen Array" << endl;
	cout << "\n=====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << " > ";
		cin >> arr[i];
    }
}

void swap(int x, int y)
{
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
	mov_count++;
	
}

void q_short ( int low, int high)
{
	int temp;
	int pivot, i, j;
	if ( low > high) {
		return;
	}

	pivot = arr[low];
	i= low + 1;
	j= high;
	
while (i <= j)
{
	while ((arr[i] <= pivot) && (i <= high))
	{
		i++;
		cmp_count++;
	}
	cmp_count++;
	while ((arr[j] > pivot ) && (i >= low))
	{
		j--;
		cmp_count++;
	}
	cmp_count++;
	if (i < j)
	{
		swap(i, j);
	}
	
}
if (low < j){
	swap(low, j);
}
q_short(low, j - 1);
q_short(j + 1, high);

}

void display() {
	cout << endl;
	cout << "\n=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << "\n\n Number Of camparasion: " << cmp_count << endl;
	cout << "Number of data movement: " << mov_count << endl;
}

int main()
{
	char ch;

	do{
		input();
		q_short(0, n -1);
		display();
		cout << "\n\n Apakah Kamu Mau Melanjutkan? (y/n):" ;
		cin >> ch;
		if (ch == 'n' || ch == 'N')
			break;
		
		system("pause");
		system("CLS");

	}while (true);
	return 0;
		
	}
