### Diziler

Diziler içinde aynı tipte bir veya daha fazla veri tutmamızı, üzerinde işlemler
yapmamızı sağlayan yapılardır.

Dizinin boyutunu;

```c++
int dizi[5];
```

şeklinde belirleriz. Bu gösterim dizimiz 5 eleman alabilir demektir.

Hadi şimdide ilk değer atayalım.

```c++
int dizi[5] = {10, 20, 30, 40, 50};
```

Yukarıdaki örneği bir kod parçası olarak yazalım.

```c++
#include <iostream>

using namespace std;

int main()
{
  int dizi[5] = {10, 20, 30, 40, 50};
  int dizi2[2] = {};

  cout << "Birinci dizinin 2. elemani: " << dizi[1] << '\n';
  cout << "Birinci dizinin 1. elemani: " << dizi[0] << '\n';
  cout << "Ikinci dizinin 2. elemani: " << dizi2[1] << '\n';

  return 0;
}
```

Örneği incelediğimizde dizi elemanlarının indislerinin 0'dan başladığını
görürüz. Yani **dizi[0]** demek **dizinin 1. elemanı** demektir.

Eğer dizinin boyutunu belirledikten sonra değer atamazsanız o dizinin
elemanları varsayılan olarak 0 atanacaktır.

------------------------------

```c++
#include <iostream>

using namespace std;

int main()
{
  int yeni_dizi [] = {16, 4, 32, 48, 120};
  int n, sonuc = 0;

  for(n = 0 ; n < 5 ; ++n)
    {
      sonuc += yeni_dizi[n];
    }
  cout << sonuc << endl;
}
```

Örneği inceleyelim. Bir dizi oluşturduk ve dizinin eleman sayısı kadar
**for** döngüsüne soktuk. Bu durumda dizinin tüm elemanları sırasıyla
toplandı. En son döngü tamamlandıktan sonra ekrana toplam değeri yazdırdık.

------------------------

### Çok Boyutlu Diziler

```
int dizi[3][5]
```

0 | 1 | 2 | 3 | 4
--|---|---|---|---
**1** |   |   |   |
**2** |   |   |   |

Yukarıdaki dizi tanımı tablodaki gibi 3 satır, 5 sütunluk bir dizi oluşturmamızı
sağlar.

```c++
#include <iostream>

using namespace std;

void printarray (int arg[], int length) {
  for (int n=0; n<length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}

int main ()
{
  int firstarray[] = {5, 10, 15};
  int secondarray[] = {2, 4, 6, 8, 10};
  printarray (firstarray,3);
  printarray (secondarray,5);
}
```

**Ekran Çıktısı:**

```
5 10 15
2 4 6 8 10
```

Örnekte dizimizi ekrana yazdırdığımız **printarray** addında bir
[fonksiyon](orta_konular/fonksiyonlar.md) yazdık. Ve **main**
fonksiyonumuzda **printarray** fonksiyonunu çağırıp ekrana tanımladığımız
dizinin elemanlarını yazdırdık.
