/*10
#include<iostream>
int main()
{
 int i = 0, x = 1;
    while (i < 20)
    {
      x *= 2;
      std::cout << x << " ";
      i++;
    }
   std::cout << std::endl;
return 0;
}
//---------------------------------------*/
/*9
#include<iostream>
int main()
{
    setlocale(LC_ALL,"ru");
    for (int i=90;i>0;i-=5)
    {
        std::cout<<i<<std::endl;
    }
    return 0;
}
//---------------------------------------*/
/*8
#include<iostream>
int main()
{
    setlocale(LC_ALL,"ru");
    for (int i=1;i<55;i+=2)
    {
        std::cout<<i<<std::endl;
    }
    return 0;
}
//---------------------------------------*/
/*3
#include<iostream>
int main()
{
    setlocale(LC_ALL,"ru");
    int a;
    std::cout<<"введите число"<<std::endl;
    std::cin>>a;
    for(int i=1;i<10;++i)
    {
        std::cout<<a*i<<std::endl;
    }
    return 0;
}
//---------------------------------------*/
/*7
#include<iostream>
int main()
{
    setlocale(LC_ALL,"ru");
    for (int i=1000;i<1100;i+=3)
    {
        std::cout<<i<<std::endl;
    }
    return 0;
}
//---------------------------------------*/
/*1
#include<iostream>
int main()
{
    setlocale(LC_ALL,"ru");
    int n=0,p=0,s=0;
    std::cout<<"Введите стартовый капитал: "<<std::endl;
    std::cin>>n;
    std::cout<<"Введите %: "<<std::endl;
    std::cin>>p;
    std::cout<<"Введите сумму для покупки магазина: "<<std::endl;
    std::cin>>s;
    std::cout<<"на "<<s/n<<" месяц"<<std::endl;
    for(n;n<s;++n)
    {
        n=n+n*p;
    }
    std::cout<<"ваш капитал составит "<<n<<std::endl;
    return 0;
}

//---------------------------------------*/
