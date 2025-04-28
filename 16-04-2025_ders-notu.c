// 1.örnek
// fonksiyona ismimi yazayım oda bana selam versin 
#include <stdio.h>
#include <stdlib.h>
void selam(char isim[])
main()
{
    selam("ahmet");
}
void selam(char isim[])
{
    printf("merhaba %s",isim);
}

// 2.örnek
// fonksiyona ismimi yazayım oda bana selam versin 2.versiyonu 
#include <stdio.h>
#include <stdlib.h>
void selam(char isim[]);
main()
{
    char isim[20];
    printf("isminizi giriniz: ");
    gets(isim);
    selam(isim);
}
void selam(char isim[])
{
    printf("merhaba %s",isim);
}

// 3.örnek 
// diziye eleman ekleyince ortalamayı hesaplayan program 
#include <stdio.h> 
#include <stdlib.h>
double ortalama(int arr[],int n);
main()
{
    int a[5]={10,20,30,40,50};
        int n = sizeof(a)/sizeof(a[0]);
    printf("ortalama: %f",ortalama(a,n)); 
}
double ortalama(int arr[],int n)
{
    double toplam=0;
    for(int i=0;i<n;i++)
    {
        toplam+=arr[i]; // => toplam=toplam+arr[i]
    }
    return toplam/n;
}

// 4.örnek 
// diziye eleman ekleyince ortalamayı hesaplayan program 2.versiyonu
#include <stdio.h> 
#include <stdlib.h>
double ortalama(int arr[],int n);
main()
{
    int a[4]={10,20,30,40};
        int n = sizeof(a)/sizeof(a[0]);
    printf("ortalama: %f",ortalama(a,n)); 
}
double ortalama(int arr[],int n)
{
    double toplam=0;
    printf("n: %d\n",n);
    for(int i=0;i<n;i++)
    {
        toplam+=arr[i]; // => toplam=toplam+arr[i]
    }
    return toplam/n;
}

// 5.örnek
// özyineleme - rekursiv fonksiyonlar 
// faktöriyel hesaplama programının özyineleme fonksiyonu ile yazılması 
#include <stdio.h>
main()
{
    printf("faktöriyel: %d",fak(3));
}
int fak(int n)
{
    if(n==0) // taban durumu
        return 1;
    else
        return n*fak(n-1); // özyineleme durumu
}

// 6.örnek
// birden 100'e kadar olan sayıların toplamını hesaplayan programın özyineleme fonksiyonu ile yazılması 
#include <stdio.h>
int top(int n);
main()
{
    printf("toplam: %d",top(100));
}
int top(int n)
{
    if(n==0) // taban durumu
        return 0;
    else
        return n+top(n-1); // özyineleme durumu
}

// 7.örnek
// birden n'e kadar olan sayıların toplamını hesaplayan programın özyineleme fonksiyonu ile yazılması 
// yapınca yazıcaz 

//8.örnek
// fibonaci dizisi hesaplama programı
#include <stdio.h>
int fib(int n)
{
    if(n==0) // taban durumu
        return 0;
    else if(n==1) // taban durumu
        return 1;
    else
        return fib(n-1)+fib(n-2); // özyineleme durumu
}
main()
{
    for(int i=0;i<10;i++)
    {
        printf("%d ",fib(i)); // fib fonksiyonunu çağırıyoruz
    }
}


































