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

Yukarıdaki örneklerde görüldüğü gibi tek satır bir if blogunda süslü parantez açmamıza gerek yoktur. Ancak
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