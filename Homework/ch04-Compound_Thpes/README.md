## Initialization Rules for Arrays
```int hand[4]; // okay```   
```hand[4] = {5, 6, 7, 9}; // not allowed``` 只有在定义时才能初始化  

```float hotelTips[5] = {5.0, 2.5};```   
### initializes only the first two elements of hotelTips   
```hotelTips[5] = 5.0;```  
```hotelTips[6] = 2.5;```  

```long totals[500] = {0}; // all the elements of an array to zero```

## Strings
char dog[8] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'}; // not a string!  
char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', **'\0'**}; // a string!

const int Size = 15;  
char name1[Size] = "C++owboy";  
strlen(name1);  // 8,字符串长度，不包含'\0'  
sizeof name1;   // 15,数组的长度  

### Adventures in String Input ```cin >> ```
The **cin** technique is to use whitespace—spaces, tabs,and newlines—to delineate a string.  

**Line-Oriented Input with** ```getline()```  
```char name[20];```  
```cin.getline(name,20);```  

**Line-Oriented Input** with ```get()```  
cin.getline(name, ArSize);  
cin.getline(dessert, Arsize); // 通过换行符来确定行尾，但不保存换行符  

cin.get(name, ArSize);  
cin.get(dessert, Arsize); // a problem 会把换行符留在行尾(输入队列)

cin.get(name, ArSize); // read first line  
**cin.get(); // read newline**  
cin.get(dessert, Arsize); // read second line

or  
cin.get(name, ArSize).```get()```; // concatenate member functions  
or  
cin.getline(name1, ArSize).getline(name2, ArSize)

cin >> year;  
char address[80];  
cin.getline(address, 80);  // 此处会读取到上面cin >> year;后头的换行符

可在cin >> year; 后加一行 cin.get();读取丢弃换行符  
后者直接 (cin >> year).get();

## Introducing the string Class
```cin.getline(charr, 20);```   // cin 的成员函数  
```getline(cin,str);```         // 

### Other Forms of String Literals
wchar_t title[] = L"Chief Astrogator"; // w_char string  
char16_t name[] = u"Felonia Ripova"; // char_16 string  
char32_t car[] = U"Humber Super Snipe"; // char_32 string

**raw string**  
cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n';  
R"(**string**)";  
R"+* (**string**)+*";

## Introducing Structures
### Bit Fields in Structures
unsigned int SN : 4; // 4 bits for SN value  
unsigned int : 4; // 4 bits **unused**

## Unions
***
## Enumerations
```enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};```  

## Pointers and the Free Store  
long * fellow; // create a pointer-to-long  
*fellow = 223323; // place a value in never-never land  
fellow 没被初始化，某个未知位置的内存空间被设成了223323  

int * pt;  
pt = 0xB8000000; // type mismatch  

int * pt;  
pt = (int *) 0xB8000000; // types now match  
delete pt;

int *p = new int[20];   //new 创建动态数组  动态联编  
p[10] = 200;    // c++将数组名解释为地址， 所以不是*p[10]  
cout << p[10] << endl;  
delete [] p;

typeName * pointer_name = new typeName;  

double wages[3] = {10000.0, 20000.0, 30000.0};  
double * pw = wages;     // name of an array = address  

cout << sizeof(wages) << " = size of wages array\n";  24  
cout << sizeof(pw) << " = size of pw pointer\n";  4