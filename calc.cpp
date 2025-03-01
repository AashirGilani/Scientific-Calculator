#include "calc.h"

int run=0,welcome=0;
double total;

void intro(){
    int n1;
    calc mycalc;
    if(welcome==0){
        std::cout<<"\n\t\t\tWelcome to my scientific calculator!"<<std::endl;
        welcome++;
    }
        std::cout<<std::setw(64)<<std::setfill(' ')<<"Which calculation would you like to perform?\n"<<std::endl;
        std::cout << "1. Addition" << std::setw(40) << "2. Subtraction"<<std::setw(44);
        std::cout << "3. Multiplication\n\n4. Division" << std::setw(37);
        std::cout << "5. Exponent" << std::setw(23) << "6. Log" << std::endl;
        std::cout << "\n7. trigonometry" << std::setw(45) << "8. Inverse trigonometry" << std::setw(50);
        std::cout << "9. Base conversions\n\n10. Calculate percentages" <<std::setw(28);
        std::cout << "11. Exit program" << std::endl;
        std::cout << "\nEnter choice here: ";
        std::cin >> n1;
        if(n1<1 || n1>11){
            std::cout<<"Invalid choice! Session terminated.";
            return;
        }
        char c='y';
    switch(n1){
      case 1:{
      mycalc.addition(mycalc);
      break;
      }
      case 2:{
      mycalc.subtraction(mycalc);
      break;
    }
      case 3:{       
          mycalc.multiplication(mycalc);
          break;
      }
      case 4:{
          mycalc.division(mycalc);
          break;
      }
      case 5:{
          mycalc.exponent(mycalc);
          break;
      }
      case 6:{
          mycalc.logar(mycalc);
          break;
      }
      case 7:{
          mycalc.trigonometry(mycalc);
          break;
      }
      case 8:{
          mycalc.inversetrig(mycalc);
          break;
      }
      case 9:{
          mycalc.baseconversion(mycalc);
          break;
      }
      case 10:{
          mycalc.calculatepercentages(mycalc);
          break;
      }
      case 11:{
        std::cout<<"\n\t\t\tThank you for using my calculator!"<<std::endl;
        return;
      }
    }
}

void calc::addition(calc &mycalc){
    std::vector<double> arr;
    int count=0;
    char prev;
    double sum=0,n;
    line();
    if(run>0){
        std::cout<<"Use the previous result for further calculation(Y/N): ";
        std::cin>>prev;
    }
    if(prev=='Y' || prev=='y'){
        std::cout<<"Enter any further numbers you want to add with spaces (Press 0 once you are done): ";
        do{
            std::cin>>n;
        arr.push_back(n);
        }while(n!=0);
        for(int i=0;i<arr.size();i++){
         sum=arr[i]+sum;
} 
std::cout<<"Sum is: "<<sum+total<<std::endl;
total=sum;
}

std::cout<<"Enter numbers one by one(with space in between) (Enter 0 once you are done): "; 
    do{
        count++;
        std::cin>>n;
        arr.push_back(n);
    }while(n!=0);

for(int i=0;i<arr.size();i++){
  sum=arr[i]+sum;
}
total=sum; 
run++;
std::cout<<"Sum is: "<<sum<<std::endl;
}


void calc::subtraction(calc &mycalc){
    std::vector<double> arr;
    double difference=0,n;
    char prev;

if(run>0){
        std::cout<<"Use the previous result for further calculation(Y/N): ";
        std::cin>>prev;
    }
    if(prev=='Y' || prev=='y'){
    std::cout<<"Enter numbers with spaces: (Press 0 once you are): ";
    do{
        std::cin>>n;
        arr.push_back(n);
    }while(n!=0);

    difference=total;

for(size_t i=0;i<arr.size();i++){
  difference-=arr[i];
}
total=difference;
run++;
std::cout<<"Difference is: "<<difference<<std::endl;
    
}


 std::cout<<"Enter numbers one by one(with space in between) (Enter 0 once you are done): ";
do{
        std::cin>>n;
        arr.push_back(n);
    }while(n!=0);

    difference=arr[0];

for(size_t i=1;i<arr.size();i++){
  difference-=arr[i];
}
total=difference;
run++;
std::cout<<"Difference is: "<<difference<<std::endl;

}

void calc::multiplication(calc &mycalc){
    std::vector<double> arr;
    double n,product=1;
    char prev;

    if(run>0){
        std::cout<<"Use the previous result for further calculation(Y/N): ";
        std::cin>>prev;
    }
    if(prev=='Y' || prev=='y'){
    std::cout<<"Enter numbers with spaces (Press 1 once you are done): ";
    do{
        std::cin>>n;

        arr.push_back(n);
    }while(n!=1);

product=total;
    for(int i=0;i<arr.size();i++){
        product*=arr[i];
    }
    total=product;
    run++;

    std::cout<<"Product is: "<<product<<std::endl;
    
    }

    std::cout<<"Enter numbers one by one(with space in between) (Enter 1 once you are done): ";

    do{
        std::cin>>n;

        arr.push_back(n);
    }while(n!=1);

    for(int i=0;i<arr.size();i++){
        product*=arr[i];
    }
    total=product;
    run++;

    std::cout<<"Product is: "<<product<<std::endl;

}

void calc::division(calc &mycalc){
std::vector<double> arr;
double n,quotient,remainder;
char prev;

if(run>0){
        std::cout<<"Use the previous result for further calculation(Y/N): ";
        std::cin>>prev;
    }
    if(prev=='Y' || prev=='y'){
    std::cout<<"Enter numbers with spaces: (Press 1 once you are done) ";
    do{
        std::cin>>n;
        if(n==0){
            std::cout<<"Division by 0 is not possible. Try again..."<<std::endl;
            mycalc.division(mycalc);
        }
        arr.push_back(n);
    }while(n!=1);
quotient=total;

for(int i=0;i<arr.size();i++){
  quotient/=arr[i];
}

std::cout<<"Quotient: "<<quotient<<std::endl;
total=quotient;

}

std::cout<<"Enter numbers with spaces (Press 1 once you are done): ";
std::cin>>n;

arr.push_back(n);

while(n!=1){
    std::cin>>n;
    if(n==0){
     std::cout<<"Divison by 0 is not possible. Try again...\n\n";
     mycalc.division(mycalc);
    }
    arr.push_back(n);
}
quotient=arr[0];

for(int i=1;i<arr.size();i++){
  quotient/=arr[i];
}

total=quotient;
run++;
std::cout<<"Quotient: "<<quotient<<std::endl;

}

void calc::exponent(calc &mycalc){
    float n,p;
    char prev;

    if(run>0){
    std::cout<<"Perform exponent on the previous output?(Y/N): ";
    std::cin>>prev;
    
    if(prev=='y' || prev=='Y'){
        std::cout<<"Enter exponent: ";
        std::cin>>p;
        std::cout<<"Result: "<<pow(total,p);
    }
}

    std::cout<<"Enter base: ";
    std::cin>>n;
    std::cout<<"Enter exponent: ";
    std::cin>>p;
    std::cout<<"Result: "<<pow(n,p)<<std::endl;
    total=pow(n,p);
}


void calc::logar(calc &mycalc){
    double n;
    char prev;

    if(run>0){
        std::cout<<"Use the previous result for further calculation(Y/N): ";
        std::cin>>prev;
    }
    if(prev=='Y' || prev=='y'){
     std::cout<<"Log of "<<total<<" is: "<<log(total)<<std::endl;
     total=log(total);
    }

    std::cout<<"Enter number: ";
    std::cin>>n;
    double result=log(n);
    std::cout<<"Log of "<<n<<" is "<<result<<std::endl;

total=result;
run++;
}

void calc::baseconversion(calc &mycalc){
    int number,baseto,bsf,count=0,n;
    int decimal=0;
    bool flag=0;

    std::cout<<"How many digits do you want to enter?: ";
    std::cin>>n;
    int arr[n];

    std::cout<<"Enter number: ";
    std::cin>>number;
    std::cout<<"Enter the base of input number(2,8,10,16): ";
    std::cin>>bsf;
    int digit;
    for(int i=0;i<n;i++){
      digit=number%10;
      number=number/10;
      if(digit>=bsf){
        std::cout<<"All digits must be within the base system! Try again...."<<std::endl;
        mycalc.baseconversion(mycalc);
      }
    }
    if(bsf!= 2 && bsf!=10 && bsf!=8 && bsf!=16){
        std::cout<<"Base must be one of these: 2,8,10,16"<<std::endl;
        mycalc.baseconversion(mycalc);
    }
    std::cout<<"Enter the base to convert it to(2,8,10,16): ";
    std::cin>>baseto;
    if(bsf!= 2 && bsf!=10 && bsf!=8 && bsf!=16){
        std::cout<<"Base must be one of these: 2,8,10,16"<<std::endl;
        mycalc.baseconversion(mycalc);
    }
    if(bsf==8 || bsf==2 || bsf==16){
        for(int i=0;number>0;i++){
         arr[i]=number%10;
         number=number/10;
         count++;
         decimal=arr[i]*pow(bsf,i)+decimal;
    }
    flag=1;
    }
    arr[n]=0,count=0;

if(!flag){
     std::cout<<"Number in required base system is: ";
    for(int i=0;number>0;i++){
        arr[i]=number%baseto;
        number=number/baseto;
        count++;
    }
     for(;count>=0;count--){
        std::cout<<arr[count];
    }

}
else if(flag){
 std::cout<<"Number in required base system is: "<<std::endl;
    for(int i=0;decimal>0;i++){
        arr[i]=decimal%baseto;
        decimal=decimal/baseto;
        count++;
    }
    for(;count>=0;count--){
        std::cout<<arr[count];
    }
}
char c;
std::cout<<"\nDo you want to perform another conversion?(Y/N): ";
std::cin>>c;
if(c=='y' || c=='Y'){
    mycalc.baseconversion(mycalc);
}
}

void calc::asktocontinue(calc &mycalc){
    char ch;
    std::cout<<"Do you want to perform another trigonometric function?(Y/N): ";
    std::cin>>ch;

    if(ch=='y' || ch=='Y'){
        mycalc.trigonometry(mycalc);
    }
    else{
        return;
    }
}

void calc::trigonometry(calc &mycalc){
    int choice;
    std::cout<<"\n1. Verify whether a triangle is right angled or not."<<std::endl;
    std::cout<<"\n2.  Sine( )"<<std::setw(30)<<"3.  Cosine()";
    std::cout<<std::setw(30)<<"4.  tangent( )"<<std::endl;
    std::cout<<"\n5.  sec()"<<std::setw(31)<<"6.  cosec()"<<std::setw(26)<<"7.  cot()"<<std::endl;
    std::cout<<"\n8.  sinh()"<<std::setw(29)<<"9.  cosh()"<<std::setw(29)<<"10.  tanh()"<<std::endl;
    std::cout<<"\n11.  cosech()"<<std::setw(27)<<"12.  sech()"<<std::setw(28)<<"13.  coth()";
    std::cout<<"\n\n14.  Angle conversion"<<std::setw(25)<<"15.  Exit program"<<std::endl;
    std::cout<<"\nEnter choice here: ";
    std::cin>>choice;
    if(choice<1 || choice>15){
        std::cout<<"Invalid choice! Try again..."<<std::endl;
        mycalc.trigonometry(mycalc);
    }
    switch(choice){
        case 1:{
        calc::rat(mycalc);
        break;
        }
        case 2:{
        calc::sine(mycalc);
        break;
        }
        case 3:{
        calc::cosine(mycalc);
        break;
        }
        case 4:{
        calc::tangent(mycalc);
        break;
        }
        case 5:{
        calc::secant(mycalc);
        break;
        }
        case 6:{
        calc::cosecant(mycalc);
        break;
        }
        case 7:{
        calc::cotangent(mycalc);
        break;
        }
        case 8:{
        calc::sinhyp(mycalc);
        break;
        }
        case 9:{
        calc::coshyp(mycalc);
        break;
        }
        case 10:{
        calc::tanhyp(mycalc);
        break;
        }
        case 11:{
        calc::cosechyp(mycalc);
        break;
        }
        case 12:{
        calc::sechyp(mycalc);
        break;
        }
        case 13:{
        calc::cothyp(mycalc);
        break;
        }
        case 14:{
        calc::angleconversions(mycalc);
        break;
        }
        case 15:
        std::cout<<"Program terminated..."<<std::endl;
        return;
    }
}

void calc::rat(calc &mycalc){
    float p,b,h;

    std::cout<<"Enter three sides of a triangle: ";
    std::cin>>p>>b>>h;
    
    if(p*p == b*b + h*h){
        std::cout<<"Triangle is right angled!"<<std::endl;
    }
    else if(b*b == p*p + h*h){
        std::cout<<"Triangle is right angled!"<<std::endl;
    }
    else if(h*h == b*b + p*p){
        std::cout<<"Triangle is right angled!"<<std::endl;
    }
    else{
    std::cout<<"Not a right angled triangle!"<<std::endl;
    }

    mycalc.asktocontinue(mycalc);

}

void calc::sine(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform sine on the previous output?(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Sine"<<"("<<total<<"): "<<sin(total)<<std::endl;
        total=sin(total);
    }
    mycalc.asktocontinue(mycalc);

   }
int a;
    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;

if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Sine"<<"("<<angle<<"): "<<sin(angle)<<std::endl;

    total=sin(angle);
   
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
    std::cout<<"Sine"<<"("<<angle<<"): "<<sin(angle)<<std::endl;

    total=sin(angle);

}
  mycalc.asktocontinue(mycalc);
}

void calc::cosine(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Cosine"<<"("<<total<<"): "<<cos(total)<<std::endl;
        total=cos(total);
    }
    mycalc.asktocontinue(mycalc);

   }
   int a;

    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;
if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Cosine"<<"("<<angle<<"): "<<cos(angle)<<std::endl;

    total=cos(angle);
}
else if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Cosine"<<"("<<angle<<"): "<<cos(angle)<<std::endl;

    total=cos(angle);
}
    mycalc.asktocontinue(mycalc);
}

void calc::tangent(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        std::cout<<"Tangent"<<"("<<total<<"): "<<tan(total)<<std::endl;
        total=tan(total);
    }
    mycalc.asktocontinue(mycalc);
   }
   int a;
std::cout<<"Press 1 to enter angle in degrees and 2 for radian: ";
std::cin>>a;
if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;

    std::cout<<"Tangent"<<"("<<angle<<"): "<<tan(angle)<<std::endl;

    total=tan(angle);
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle*=pi;

    std::cout<<"Tangent"<<"("<<angle<<"): "<<tan(angle)<<std::endl;

    total=tan(angle);

}
mycalc.asktocontinue(mycalc);

}

void calc::cosecant(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Cosecant"<<"("<<total<<"): "<<(1/sin(total))<<std::endl;
        total=1/sin(total);
    }
    mycalc.asktocontinue(mycalc);

   }
int a;
    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;

if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Cosecant"<<"("<<angle<<"): "<<(1/sin(angle))<<std::endl;

    total=1/sin(angle);
   
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Cosecant"<<"("<<angle<<"): "<<(1/sin(angle))<<std::endl;

    total=1/sin(angle);

}
mycalc.asktocontinue(mycalc);
}

void calc::secant(calc &mycalc){
     double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Secant"<<"("<<total<<"): "<<(1/cos(total))<<std::endl;
        total=1/cos(total);
    }
    mycalc.asktocontinue(mycalc);

   }
   int a;

    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;
if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Secant"<<"("<<angle<<"): "<<(1/cos(angle))<<std::endl;

    total=1/cos(angle);
}
else if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Secant"<<"("<<angle<<"): "<<(1/cos(angle))<<std::endl;

    total=1/cos(angle);
}
mycalc.asktocontinue(mycalc);
}

void calc::cotangent(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        std::cout<<"Cotangent"<<"("<<total<<"): "<<(1/tan(total))<<std::endl;
        total=1/tan(total);
    }
    mycalc.asktocontinue(mycalc);

   }
   int a;
std::cout<<"Press 1 to enter angle in degrees and 2 for radian: ";
std::cin>>a;
if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;

    std::cout<<"Cotangent"<<"("<<angle<<"): "<<(1/tan(angle))<<std::endl;

    total=1/tan(angle);
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle*=pi;

    std::cout<<"Cotangent"<<"("<<angle<<"): "<<(1/tan(angle))<<std::endl;

    total=1/tan(angle);

}
mycalc.asktocontinue(mycalc);

}


void calc::sinhyp(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Sinh"<<"("<<total<<"): "<<sinh(total)<<std::endl;
        total=sinh(total);
    }
    mycalc.asktocontinue(mycalc);
   }
int a;
    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;

if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Sinh"<<"("<<angle<<"): "<<sinh(angle)<<std::endl;

    total=sinh(angle);
   
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Sinh"<<"("<<angle<<"): "<<sinh(angle)<<std::endl;

    total=sinh(angle);

}
mycalc.asktocontinue(mycalc);
}


void calc::coshyp(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Cosh"<<"("<<total<<"): "<<cosh(total)<<std::endl;
        total=cosh(total);
    }
    mycalc.asktocontinue(mycalc);

   }
   int a;

    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;
if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Cosh"<<"("<<angle<<"): "<<cosh(angle)<<std::endl;

    total=cosh(angle);
}
else if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Cosh"<<"("<<angle<<"): "<<cosh(angle)<<std::endl;

    total=cosh(angle);
}
mycalc.asktocontinue(mycalc);
}


void calc::tanhyp(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        std::cout<<"Tanh"<<"("<<total<<"): "<<tanh(total)<<std::endl;
        total=tanh(total);
    }
    mycalc.asktocontinue(mycalc);

   }
   int a;
std::cout<<"Press 1 to enter angle in degrees and 2 for radian: ";
std::cin>>a;
if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;

    std::cout<<"Tanh"<<"("<<angle<<"): "<<tanh(angle)<<std::endl;

    total=tanh(angle);
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle*=pi;

    std::cout<<"Tanh"<<"("<<angle<<"): "<<tanh(angle)<<std::endl;

    total=tanh(angle);

}
mycalc.asktocontinue(mycalc);
}


void calc::cosechyp(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Cosech"<<"("<<total<<"): "<<(1/sinh(total))<<std::endl;
        total=1/sinh(total);
    }
    mycalc.asktocontinue(mycalc);

   }
int a;
    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;

if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Cosech"<<"("<<angle<<"): "<<(1/sinh(angle))<<std::endl;

    total=1/sinh(angle);
   
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Cosech"<<"("<<angle<<"): "<<(1/sinh(angle))<<std::endl;

    total=1/sinh(angle);

}
mycalc.asktocontinue(mycalc);
}


void calc::sechyp(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Sech"<<"("<<total<<"): "<<(1/cosh(total))<<std::endl;
        total=1/cosh(total);
    }
    mycalc.asktocontinue(mycalc);

   }
   int a;

    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;
if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Sech"<<"("<<angle<<"): "<<(1/cosh(angle))<<std::endl;

    total=1/cosh(angle);
}
else if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Sech"<<"("<<angle<<"): "<<(1/cosh(angle))<<std::endl;

    total=1/cosh(angle);
}
mycalc.asktocontinue(mycalc);

}


void calc::cothyp(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

   std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        std::cout<<"Coth"<<"("<<total<<"): "<<(1/tanh(total))<<std::endl;
        total=1/tanh(total);
    }
    mycalc.asktocontinue(mycalc);

   }
   int a;
std::cout<<"Press 1 to enter angle in degrees and 2 for radian: ";
std::cin>>a;
if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;

    std::cout<<"Coth"<<"("<<angle<<"): "<<(1/tanh(angle))<<std::endl;

    total=1/tanh(angle);
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle*=pi;

    std::cout<<"Coth"<<"("<<angle<<"): "<<(1/tanh(angle))<<std::endl;

    total=1/tanh(angle);

}
mycalc.asktocontinue(mycalc);

}


void calc::inversetrig(calc &mycalc){
    int choice;

    std::cout<<"\n\t\t\tWhich inverse trigonometric function would you like to perform?\n"<<std::endl;

    std::cout<<"1. sininverse()"<<std::setw(30)<<"2. cosinverse()"<<std::setw(30)<<"3. taninverse()"<<std::endl;
    std::cout<<"\n4. cosestd::cinverse()"<<std::setw(28)<<"5. sestd::cinverse()"<<std::setw(30)<<"6. cotinverse()"<<std::endl;
    std::cout<<"\n7. Cosh Inverse"<<std::setw(30)<<"8. Sinh Inverse"<<std::setw(30)<<"9. Tanh Inverse"<<std::endl;
    std::cout<<"\nEnter choice here: ";
    std::cin>>choice;
    
    if(choice<1 || choice>9){
        std::cout<<"Invalid choice! Try again...";
        mycalc.inversetrig(mycalc);
    }

    switch(choice){
        case 1:
        sininverse(mycalc);
        case 2:
        cosinverse(mycalc);
        case 3:
        taninverse(mycalc);
        case 4:
        cosinverse(mycalc);
        case 5:
        sininverse(mycalc);
        case 6:
        cotinverse(mycalc);
        case 7:
        coshinverse(mycalc);
        case 8:
        sinhinverse(mycalc);
        case 9:
        tanhinverse(mycalc);
    }
}

void calc::sininverse(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

  std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Sine Inverse"<<"("<<total<<"): "<<asin(total)<<std::endl;
        total=asin(total);
    }
    mycalc.asktocontinue(mycalc);

   }
int a;
    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;

if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Sine Inverse"<<"("<<angle<<"): "<<asin(angle)<<std::endl;

    total=asin(angle);
   
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Sine Inverse"<<"("<<angle<<"): "<<asin(angle)<<std::endl;

    total=asin(angle);

}
mycalc.asktocontinue(mycalc);
}

void calc::cosinverse(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

   std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Cos Inverse"<<"("<<total<<"): "<<acos(total)<<std::endl;
        total=acos(total);
    }
    mycalc.asktocontinue(mycalc);
   }
   int a;

    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;
if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Cos inverse"<<"("<<angle<<"): "<<acos(angle)<<std::endl;

    total=acos(angle);
}
else if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Cos inverse"<<"("<<angle<<"): "<<acos(angle)<<std::endl;

    total=acos(angle);
}
mycalc.asktocontinue(mycalc);
}

void calc::taninverse(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        std::cout<<"Tan inverse"<<"("<<total<<"): "<<atan(total)<<std::endl;
        total=atan(total);
    }
    mycalc.asktocontinue(mycalc);

   }
   int a;
std::cout<<"Press 1 to enter angle in degrees and 2 for radian: ";
std::cin>>a;
if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;

    std::cout<<"Tan inverse"<<"("<<angle<<"): "<<atan(angle)<<std::endl;

    total=atan(angle);
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle*=pi;

    std::cout<<"Tan inverse"<<"("<<angle<<"): "<<atan(angle)<<std::endl;

    total=atan(angle);

}
mycalc.asktocontinue(mycalc);
}

void calc::cosecinverse(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

  std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Cosec Inverse"<<"("<<total<<"): "<<1/asin(total)<<std::endl;
        total=1/asin(total);
    }
    mycalc.asktocontinue(mycalc);

   }
int a;
    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;

if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Cosec Inverse"<<"("<<angle<<"): "<<1/asin(angle)<<std::endl;

    total=1/asin(angle);
   
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Cosec Inverse"<<"("<<angle<<"): "<<1/asin(angle)<<std::endl;

    total=1/asin(angle);

}
mycalc.asktocontinue(mycalc);

}

void calc::secinverse(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

   std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Secant Inverse"<<"("<<total<<"): "<<1/acos(total)<<std::endl;
        total=1/acos(total);
    }
    mycalc.asktocontinue(mycalc);
   int a;

    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;
if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Secant inverse"<<"("<<angle<<"): "<<1/acos(angle)<<std::endl;

    total=1/acos(angle);
}
else if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Secant inverse"<<"("<<angle<<"): "<<1/acos(angle)<<std::endl;

    total=1/acos(angle);
}
mycalc.asktocontinue(mycalc);
}
}


void calc::cotinverse(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        std::cout<<"Cot inverse"<<"("<<total<<"): "<<1/atan(total)<<std::endl;
        total=1/atan(total);
    }
    mycalc.asktocontinue(mycalc);

   }
   int a;
std::cout<<"Press 1 to enter angle in degrees and 2 for radian: ";
std::cin>>a;
if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;

    std::cout<<"Cot inverse"<<"("<<angle<<"): "<<1/atan(angle)<<std::endl;

    total=1/atan(angle);
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle*=pi;

    std::cout<<"Cot inverse"<<"("<<angle<<"): "<<1/atan(angle)<<std::endl;
    total=1/atan(angle);
}
mycalc.asktocontinue(mycalc);
}

void calc::coshinverse(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Cosh inverse"<<"("<<total<<"): "<<1/cosh(total)<<std::endl;
        total=1/cosh(total);
    }
    mycalc.asktocontinue(mycalc);

   }
   int a;

    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;
if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Cosh inverse"<<"("<<angle<<"): "<<1/cosh(angle)<<std::endl;

    total=1/cosh(angle);
}
else if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Cosh inverse"<<"("<<angle<<"): "<<1/cosh(angle)<<std::endl;

    total=1/cosh(angle);
}
mycalc.asktocontinue(mycalc);
}

void calc::sinhinverse(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        total=total*pi;
        std::cout<<"Sinh inverse"<<"("<<total<<"): "<<1/sinh(total)<<std::endl;
        total=sinh(total);
    }
    mycalc.asktocontinue(mycalc);

   }
int a;
    std::cout<<"Press 1 to enter angle in degree and 2 for radian: ";
    std::cin>>a;

if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    std::cout<<"Sinh inverse"<<"("<<angle<<"): "<<1/sinh(angle)<<std::endl;

    total=1/sinh(angle);
   
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle=angle*pi;
     std::cout<<"Sinh inverse"<<"("<<angle<<"): "<<1/sinh(angle)<<std::endl;

    total=1/sinh(angle);

}
mycalc.asktocontinue(mycalc);
}

void calc::tanhinverse(calc &mycalc){
    double angle;
    char prev,ch;

   if(run>0){

    std::cout<<"Perform calculation on the previous output(Y/N): ";
    std::cin>>prev;

    if(prev=='y' || prev=='Y'){
        std::cout<<"Tanh inverse"<<"("<<total<<"): "<<1/tanh(total)<<std::endl;
        total=1/tanh(total);
    }
    mycalc.asktocontinue(mycalc);

   }
   int a;
std::cout<<"Press 1 to enter angle in degrees and 2 for radian: ";
std::cin>>a;
if(a==2){
    std::cout<<"Enter angle: ";
    std::cin>>angle;

    std::cout<<"Tanh inverse"<<"("<<angle<<"): "<<1/tanh(angle)<<std::endl;

    total=1/tanh(angle);
}
else if(a==1){
    std::cout<<"Enter angle: ";
    std::cin>>angle;
    angle*=pi;

    std::cout<<"Tanh inverse"<<"("<<angle<<"): "<<1/tanh(angle)<<std::endl;

    total=1/tanh(angle);

}
mycalc.asktocontinue(mycalc);

}


void calc::angleconversions(calc &mycalc){
    float angle;
    int n;

    std::cout<<"1. Angle in radian\n2. Angle in degrees\n"<<std::endl;
    std::cout<<"Enter choice here: ";
    std::cin>>n;
    if(n==2){
        angle=angle*pi;
        std::cout<<"Angle ("<<angle<<")in radians: "<<angle<<std::endl;
        run++;
        total+=angle;
    }
    else if(n==1){
        angle*=180/3.1415926;
        std::cout<<"Angle ("<<angle<<")in degrees: "<<angle<<std::endl;
        run++;
        total+=angle;
    }
    else{
        std::cout<<"Invalid choice. Try again..."<<std::endl;
        angleconversions(mycalc);
    }
    char ch;
    std::cout<<"Do you want to perform another conversion?(Y/N): ";
    std::cin>>ch;
    if(ch=='y' || ch=='Y')
    angleconversions(mycalc);
}


void calc::calculatepercentages(calc &mycalc){
    double n;
    float p,rslt;
    char ch;

    if(run>0){
        std::cout<<"Do you want to calculate the percentage of the previous output?(Y/N): ";
        std::cin>>ch;
        if(ch=='y' || ch=='Y'){
            std::cout<<"Enter the percentage that you want to calculate (without %): ";
            std::cin>>p; 
            rslt=(p/100)*total;
            std::cout<<p<<" percent of "<<total<<" : "<<rslt<<std::endl; 
            run++;  
            total+=rslt;
        }
    }

    std::cout<<"Enter number: ";
    std::cin>>n;
    std::cout<<"Enter the percentage that you want to calculate (without %): ";
    std::cin>>p;

    rslt=(p/100)*n;

    std::cout<<p<<" percent of "<<n<<" : "<<rslt<<std::endl;
    run++; 
    total+=rslt;

    char choice;
    std::cout<<"Do you want to calculate another percentage?(Y/N): ";
    std::cin>>choice;
    if(choice=='y' || choice=='Y')
    calculatepercentages(mycalc);

}
