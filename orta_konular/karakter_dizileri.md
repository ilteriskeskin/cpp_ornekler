### Karakter Dizileri

**string** den önceki konularda üstü kapalı bir şekilde bahsetmiştik. **string** ler
karakter dizilerini işlemek için çok güçlü bir sınıftır aslında. Normal dizi tanımlar gibi
tanımlamamız mümkündür.

```c++
char dizi[20];
```

```c++
char kelime[] = {'M', 'e', 'r', 'h', 'a', 'b', 'a', '\0'};
char kelime[] = "Merhaba";
```

Yukarıdaki iki karakter dizisi tanımlama işlemi aynıdır.

```c++
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  char question1[] = "Adın ne? ";
  string question2 = "Nerede yaşıyorsun? ";
  char answer1 [80];
  string answer2;
  cout << question1;
  cin >> answer1;
  cout << question2;
  cin >> answer2;
  cout << "Merhaba, " << answer1;
  cout << " senin şehrin " << answer2 << "!\n";
  return 0;
}
```

**Ekran Çıktısı:**

```
Adın ne? İlteriş
Nerede yaşıyorsun? Samsun
Merhaba, İlteriş senin şehrin Samsun!
```
