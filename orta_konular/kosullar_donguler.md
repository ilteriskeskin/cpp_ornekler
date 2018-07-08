### Koşullu İfadeler ve Döngüler

Buraya kadar geldiyseniz eğer epey bir yol kat ettiniz demektir. Sabırla okumaya devam ediniz.
Yazdığımız programların tamamı dümdüz programdı. Artık bunları biraz daha dinamik hale getirmenin 
vakti geldi.

**Koşullu İfadeler**

Karar verme durumu olan bir program yazacaksak (10, 5'ten büyük müdür? vb.) **if - else** yapısını 
kullanmalıyız. 

```c++
#include <iostream>

using namespace std;

int main()
{
    int x = 100;

    if(x == 100)
        cout << "x = 100" << endl;

    if(x == 100)
    {
        cout << "x = ";
        cout << x << endl;
    }

    if(x == 100) { cout << "x = "; cout << x << endl;}
}
```

**Ekran Çıktısı:**

```
x = 100
x = 100
x = 100
```

Yukarıdaki örneklerde görüldüğü gibi tek satır bir if bloğunda süslü parantez açmamıza gerek yoktur. Ancak
bir satırdan fazla olan tüm if bloklarında süslü parantez açmalıyız.

```c++
#include <iostream>

using namespace std;

int main()
{
    int x = -4;

    if(x > 0)
        cout << "x pozitif" << endl;
    else if( x < 0)
        cout << "x negatif" << endl;
    else
        cout << "x = 0" << endl;
}
```

**Ekran Çıktısı:**

```
x negatif
```

------------------------------------

### DÖngüler

Arkadaşlar bazı programlarda birden fazla işlem yapmamız gerekir. Örneğin ekrana 1 ile 100 arasındaki sayıları 
yazdırmak istediğimizde tek tek **cout** ile yazdırmamız oldukça zordur. C++ ile döngü kavramını öğrenmeye **while**
döngüsü ile başlayacağız.

**While Döngüsü**

```c++
#include <iostream>

using namespace std;

int main()
{
    int n = 10;

    while (n>0) 
    {
        cout << n << ", ";
        --n; // n = n - 1 ifadesi ile aynı işi görmektedir.
    }

    cout << "Ucusss!!\n";
}
```

**Ekran Çıktısı**

```
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, Ucusss!!
```

Yukarıda örnekte **n** değişkenine başlangıçta 10 sayısı atanmış. Ardından n değişkeni **sıfırdan** büyük 
olduğu sürece ilk olarak ekrana **n** değişkeninin değeri yazdırılmış sonra --n işlemine tabii tutulmuştur.
Döngü sonlandıktan sonra yani **n** değişkeni **sıfıra** eşit oldukan sonra döngüden çıkılmış ve ekrana
**Uçuşşş!!** yazdırılmıştır.

**Do-While Döngüsü**

```c++
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str;

    do 
    {
        cout << "Bir mesaj giriniz: ";
        getline (cin,str);
        cout << "Mesajiniz        : " << str << '\n';
    }     
    while (str != "hoscakal");
}
```

**Ekran Çıktısı**

```
Bir mesaj giriniz: Merhaba Dünya
Mesajiniz        : Merhaba Dünya
Bir mesaj giriniz: hoscakal
Mesajiniz        : hoscakal
```

Bu döngüde **while döngüsü** ile belirtilen şart sağlandığı sürece **do** bloğunun içindeki
komutlar çalıştırılır. Programa **hoscakal** kelimesi girildiğinde yani **str == hoscakal** 
olduğunda son kez mesajınız yazar ve program sonlandırılır.

**For Döngüsü**

```c++
#include <iostream>
using namespace std;

int main ()
{
    for (int n = 10; n > 0; n--) 
    {
        cout << n << ", ";
    }

    cout << "Ucusss!!\n";
}
```

**Ekran Çıktısı:**

```
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, Ucusss!!
```

Yani **while dönügü** ile yaptığımız şeyi biraz daha farklı bir yöntemle yaptık. Döngümüzde
int n = 10 ifadesi **n** değişkeninin ilk değerini atadık. Ardından **sıfıra** eşit olana kadar n-- 
işlemini yani **n** değişkeninin değerini 1 azaltma işlemini yaptık. Sonra ekrana yazdırdık.

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str2 {"Merhaba"};

    for (char c : str2)
    {
        cout << "[" << c << "]";
    }
    
    cout << '\n';
}
```

**Ekran Çıktısı:**

```
[M][e][r][h][a][b][a]
```

Yukarıdaki kod parçasında for döngüsünü biraz daha efektif kullandık ve **str2** değişkenimizin harfleri
bitene kadar döngümüz döndü ve ekrana bu çıktıyı verdi.

**Break-Continue**

```c++
#include <iostream>

using namespace std;

int main()
{
    for (int n = 10; n > 0; n--)
    {
        cout << n << ", ";
        if (n == 3)
        {
            cout << "Sayaç durdu" << endl;
            break;
        }
    }
}
```

**Ekran Çıktısı:**

```
10, 9, 8, 7, 6, 5, 4, 3, Sayaç durdu
```

Bu örnekte **break** deyimini gördük. **break** belirtilen şart sağlandığı durumda
(**n** değişkeninin 3 olması) döngüyü sonlandırır.

```c++
#include <iostream>

using namespace std;

int main()
{
    for (int n = 10; n > 0; n--) 
    {
        if (n == 5) continue;
            cout << n << ", ";
    }
    cout << "Ucusss!!\n";
}
```

**Ekran Çıktısı:**

```
10, 9, 8, 7, 6, 4, 3, 2, 1, Ucusss!!
```

Burada ise **continue** deyimi **n** değişkeni 5 olduğu durumda devreye girdi
ve 5 sayısını atlayıp döngüye devam etti. Gördüğünüz gibi ekran çıktısında 5
sayısı bulunmamaktadır.

**Switch Deyimi**

```c++
#include <iostream>

using namespace std;

int main()
{
    int x = 2;

    switch (x) 
    {
        case 1:
        case 2:
        case 3:
            cout << "x = 1, 2 ya da 3";
            break;
        default:
            cout << "x != 1, 2 ya da 3";
    }
}
```

**Ekran Çıktısı:**

```
x = 1, 2 ya da 3
```

Örnekten anlaşıldığı gibi x değerimiz **case 1,2,3** içine giriyorsa o bölümdeki
komut çağırılıyor. Girmiyorsa **defaul** bölümündeki komut çağırılıyor.