#include <iostream>
#include <string>
using namespace std;

int main(){
    int product_id;
    int quantity;
    double discount1;
    double discount2;
    double subtotal;
    char loyalty;
    int method;
    cout <<"============welcome-to-freshmart-casheir============"<<endl;
    cout <<"products : \n 1)bread 1.99/bag \n 2)milk 2.99/1L \n 3)salmon 7.59/KG \n 4)chicken 5.99/KG \n 5)orange 3.49/KG"<<endl;
    cout <<"enter the product id (1-5) : ";
    cin >>product_id;
    cout <<"enter the quantity (1-100) : ";
    cin >>quantity;
    cout <<"loyalty card (y/n)         : ";
    cin >>loyalty;
    cout <<"enter payment method (1.cash/2.card/3.wallet) : ";
    cin >>method;

    cout <<"---------------receipt----------------"<<endl;
    switch(product_id){
        case 1:
        subtotal = quantity*1.99;
        cout <<"product     : bread"<<endl;
        cout <<"unit price  : 1.99JD"<<endl;
        cout <<"quantity    : "<<quantity<<endl;
        cout <<"subtotal    : "<<subtotal<<endl;
        break;
        
        case 2:
        subtotal = quantity*2.99;
        cout <<"product     : milk"<<endl;
        cout <<"unit price  : 2.99JD"<<endl;
        cout <<"quantity    : "<<quantity<<endl;
        cout <<"subtotal    : "<<subtotal<<endl;
        break;

        case 3:
        subtotal = quantity*7.59;
        cout <<"product     : salmon"<<endl;
        cout <<"unit price  : 7.59JD"<<endl;
        cout <<"quantity    : "<<quantity<<endl;
        cout <<"subtotal    : "<<subtotal<<endl;
        break;

        case 4:
        subtotal = quantity*5.99;
        cout <<"product     : chicken"<<endl;
        cout <<"unit price  : 5.99JD"<<endl;
        cout <<"quantity    : "<<quantity<<endl;
        cout <<"subtotal    : "<<subtotal<<endl;
        break;

        case 5:
        subtotal = quantity*3.49;
        cout <<"product     : orange"<<endl;
        cout <<"unit price  : 3.49JD"<<endl;
        cout <<"quantity    : "<<quantity<<endl;
        cout <<"subtotal    : "<<subtotal<<endl;
        break;

        default:
        cout<<"error :Invalid product ID!!!"<<endl;
    }
        if(quantity>=10){
            discount1 = subtotal * 0.10;
            cout <<"discount 10%: -"<<discount1<<endl;
        }
        else if(subtotal>50){
            discount1 = subtotal * 0.05;
            cout <<"discount 5% : -"<<discount1<<endl;
        }
        else{
            cout <<"discount 0% : -0"<<endl;
        }

        switch(loyalty){
            case 'y':
            discount2 = (subtotal-discount1)*0.03;
            cout <<"loyalty 3%  : "<<discount2<<endl;
            break;

            case 'n':
            discount2 = 0;
            cout <<"loyalty 0%  : -"<<discount2<<endl;
            break;

            default:
            discount2 = 0;
            cout<<"please enter y || n"<<endl;
        }

    return 0;
}
