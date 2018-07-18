### Overloads ve Templates (Aşırı Yüklemeler ve Şablonlar)

Fonksiyonları geçtiğimiz derste öğrendik. Peki biz iki tane aynı isimde fakat farklı tiplerde fonksiyonlar
yazdığımızda ne olacak? Bunun cevabını **overloads** kısmında öğreneceğiz.

---------------------

### Overloaded Fonksiyonlar (Aşırı Yüklenmiş Fonksiyonlar)

```c++
int overloaded(int a, int b)
{
  return (a*b);
}

double overloaded(double a, double b)
{
  return (a/b);
}

int main ()
{
  int x=5,y=2;
  double n=5.0,m=2.0;

  cout << overloaded(x,y) << '\n';
  cout << overloaded(n,m) << '\n';

  return 0;
}
```

**Ekran Çıktısı:**

```
10
2.5
```

Örnekte gördüğümüz gibi iki tane aynı isimde, farklı tipte fonksiyon var. **main**de çağırıldığında aldıkları 
parametre değerlerine göre program bir ayrım yapıyor. **double** tipindeki fonksiyonun çıktısı **double** tipinde,
**int** tipindeki fonksiyonun çıktısı **int** tipindedir.

---------------------------

### Templates (Şablonlar)

Fonksiyonların parametreleri farklı tiplerde ancak fonksiyon isimleri aynı olabilir bunu öğrendik. Ancak hem fonksiyon 
parametreleri hem isimleri de aynı tipte olabilir. Bunun için C++ dilinde **template**ler geliştirilmiştir. Örnek ile
daha iyi anlamaya çalışalım.

```c++
#include <iostream>

using namespace std;

template <class T>
T sum(T x, T y)
{
    T result;
    result = x + y;
    return result;
}

int main(int argc, char const *argv[])
{

    int a = 3, b = 2, c;
    double d = 7.12, e = 2.4, f;

    c = sum<int>(a,b);
    f = sum<double>(d,e);

    cout << c << endl << f << endl;

    return 0;
}
```

**Ekran Çıktısı:**

```
5
9.52
```

Örneği inceleyelim. sum adında bir template fonksiyonumuz var. **sum** fonksiyonunun tipi ve alacağı parametrelerin
tipi belli değil. **main** kısmında **double** ve **int** tipinde değişkenlerimiz var. **sum** fonksiyonu önce **int**
değişkenlerini çağırıyor ardından **double** değişkenlerini çağırıyor. Böylece tipi belli olmayan fonksiyonumuz farklı
tiplerde değişkenler ile işlem yapabiliyor.