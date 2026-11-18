#include <iostream>
#include <string>
using namespace std;

int main() {
    int product_ID;
    int quantity;
    char loyalty_card;
    double sales_tax;
    double final_total;
    double card_fee;
    double after_discounts;
    double subtotal;
    int method;
    double result;
    cout << "----------|WELLCOME TO FRESHMART|----------"<<endl;
    cout << "PRODUCTS : "<<endl;
    cout << "1. bread (0.99JD/bag)"<<endl;
    cout << "2. milk (1.59JD/L)"<<endl;
    cout << "3. salmon (9.99JD/KG)"<<endl; 
    cout << "4. eggs (4.99JD/L)"<<endl;
    cout << "5. olive oil (6.59JD/L) \n"<<endl;
    cout << "------------------------------------"<<endl;
    cout << "enter the product id (1-5) : ";
    cin >> product_ID;
    cout << "enter the quantity (1-100) : ";
    cin >> quantity;
    cout << "loyalty card?(y/n) : ";
    cin >> loyalty_card;
    cout << "payment method (1.cash/2.card/3.wallet) : ";
    cin >> method;
    
    switch(product_ID){
        case 1:
        subtotal = quantity*0.99;
        cout << "---------------|RECEIPT|---------------"<<endl;
        cout << "product : bread "<<endl;
        cout << "unit price : 0.99 JD "<<endl;
        cout << "quantity : "<<quantity<<endl;
        cout << "subtotal : "<<subtotal<<endl;
        break;
        case 2:
        subtotal = quantity*1.59;
        cout << "---------------|RECEIPT|---------------"<<endl;
        cout << "product : milk "<<endl;
        cout << "unit price : 1.59JD "<<endl;
        cout << "quantity : "<<quantity<<endl;
        cout << "subtotal : "<<subtotal<<endl;
        break;
        case 3:
        subtotal = quantity*9.99;
        cout << "---------------|RECEIPT|---------------"<<endl;
        cout << "product : salmon "<<endl;
        cout << "unit price : 9.99JD "<<endl;
        cout << "quantity : "<<quantity<<endl;
        cout << "subtotal : "<<subtotal<<endl;
        break;
        case 4:
        subtotal = quantity*4.99;
        cout << "---------------|RECEIPT|---------------"<<endl;
        cout << "product : eggs "<<endl;
        cout << "unit price : 4.99JD "<<endl;
        cout << "quantity : "<<quantity<<endl;
        cout << "subtotal : "<<subtotal<<endl;
        break;
        case 5:
        subtotal = quantity*6.59;
        cout << "---------------|RECEIPT|---------------"<<endl;
        cout << "product : olive oil "<<endl;
        cout << "unit price : 6.59JD "<<endl;
        cout << "quantity : "<<quantity<<endl;
        cout << "subtotal : "<<subtotal<<endl;
        break;
    }

    if(quantity>=10){
        cout <<"discount 10% : -"<<subtotal*0.10<<"JD"<<endl;
    }
    else if(subtotal>50){
        cout <<"discount 5% : -"<<subtotal*0.05<<"JD"<<endl;
    }
    else{
        cout <<"discount 0% : -0JD"<<endl;
    }

    if(loyalty_card=='y'){
        cout <<"loyalty 3% : -"<<subtotal*0.03<<"JD"<<endl;
    }
    else{
        cout <<"loyalty 0% : -0JD"<<endl;
    }

    if(quantity>=10 && loyalty_card=='y'){
        after_discounts = subtotal-(subtotal*0.13);
        sales_tax = subtotal*0.16;
        cout << "after discounts : "<<after_discounts<<"JD"<<endl;
        cout << "sales tax 16% : +"<<sales_tax<<endl;
    }
    else if(quantity>=10 && loyalty_card=='n'){
        after_discounts = subtotal-(subtotal*0.10);
        sales_tax = subtotal*0.16;
        cout << "after discounts : "<<after_discounts<<"JD"<<endl;
        cout << "sales tax 16% : +"<<sales_tax<<endl;
    }
    else if(quantity<10 && loyalty_card=='y'){
        after_discounts = subtotal-(subtotal*0.03);
        sales_tax = subtotal*0.16;
        cout << "after discounts : "<<after_discounts<<"JD"<<endl;
        cout << "sales tax 16% : +"<<sales_tax<<endl;
    }
    else if(quantity<10 && loyalty_card=='n'){
        after_discounts = subtotal;
        sales_tax = subtotal*0.16;
        cout << "after discounts : "<<after_discounts<<"JD"<<endl;
        cout << "sales tax 16% : +"<<sales_tax<<endl;
    }
    else if(subtotal>50 && loyalty_card=='y'){
        after_discounts = subtotal-(subtotal*0.08);
        sales_tax = subtotal*0.16;
        cout << "after discounts : "<<after_discounts<<"JD"<<endl;
        cout << "sales tax 16% : +"<<sales_tax<<endl;
    }
    else if(subtotal>50 && loyalty_card=='n'){
        after_discounts = subtotal-(subtotal*0.05);
        sales_tax = subtotal*0.16;
        cout << "after discounts : "<<after_discounts<<"JD"<<endl;
        cout << "sales tax 16% : +"<<sales_tax<<endl;
    }
    else{
        sales_tax = subtotal*0.16;
        cout<<"after discounts : "<<subtotal<<"JD"<<endl;
        cout << "sales_tax 16% : +"<<sales_tax<<endl;
    }

    if(method==1){
        cout <<"card fee 0% : +0JD"<<endl;
    }
    else if(method==2){
        card_fee = subtotal*0.01;
        cout <<"card fee 1% : +"<<card_fee<<endl;
    }
    else if(subtotal>=20){
        method = 3;
        cout <<"card fee 0% : +0JD"<<endl;
        method == 3 ? cout <<"bonus : Congratulations you earned 2 JD"<<endl: cout <<"-----no bonus-----";
    }

    
    cout <<"--------------------------------------"<<endl;
    if(quantity>=10 && loyalty_card=='y' && method==2){
        final_total = (subtotal-(subtotal*0.13))+subtotal*0.17;
        cout <<"FIANL TOTAL : "<<final_total<<"JD"<<endl;
        cout <<"payment method : card"<<endl;
    }
    else if(subtotal>50 && quantity<10 && loyalty_card=='y' && method==2){
        final_total = (subtotal-(subtotal*0.08))+subtotal*0.17;
        cout <<"FINAL TOTAL : "<<final_total<<"JD"<<endl;
        cout <<"payment method : card"<<endl;
    }
    else if(quantity>=10 && loyalty_card=='n'){
        final_total = (subtotal-(subtotal*0.10))+subtotal*0.16;
        cout <<"FINAL TOTAL : "<<final_total<<"JD"<<endl;
    }
    else if(loyalty_card=='y' && method==2){
        final_total = (subtotal-(subtotal*0.03))+subtotal*0.17;
        cout << "FINAL TOTAL : "<<final_total<<"JD"<<endl;
        cout << "payment method : card"<<endl;
    }
    else if(quantity>=10 && loyalty_card=='n' && method==2){
        final_total = subtotal + subtotal*0.17;
        cout << "FINAL TOTAL : "<<final_total<<"JD"<<endl;
        cout << "payment method : card"<<endl;
    }
    else if(quantity>=10 && loyalty_card=='n' && method==2){
        final_total = (subtotal-(subtotal*0.10))+subtotal*0.17;
        cout << "FINAL TOTAL : "<<final_total<<"JD"<<endl;
        cout << "payment method : card"<<endl;
    }
    else if(quantity<10 && subtotal>50 && loyalty_card=='n' && method==2){
        final_total = (subtotal-(subtotal*0.05))+subtotal*0.17;
        cout << "FINAL TOTAL : "<<final_total<<"JD"<<endl;
        cout << "payment method : card"<<endl;
    }
    else if(quantity<10 && subtotal>50 && loyalty_card=='y'){
        final_total = (subtotal-(subtotal*0.08))+subtotal*0.16;
        cout << "FINAL TOTAL : "<<final_total<<"JD"<<endl;
    }
    else if(quantity>=10 && loyalty_card=='n' && method==2){
        final_total = (subtotal-(subtotal*0.10))+subtotal*0.17;
        cout << "FINAL TOTAL : "<<final_total<<"JD"<<endl;
        cout << "payment method : card"<<endl;
    }
    else{
        final_total = subtotal+subtotal*0.16;
        cout << "FINAL TOTAL : "<<final_total<<"JD"<<endl;
    }

    if(method==1){
        cout <<"payment method : cash"<<endl;
    }
    else if(method==3){
        cout <<"payment method : wallet"<<endl;
    }


    return 0;
}
