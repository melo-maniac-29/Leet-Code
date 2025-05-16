#include<bits/stdc++.h>

using namespace std;

int main(){
    // Integer data types
    int a = 10;                   // 4 bytes (typically): -2^31 to 2^31-1
    short int b = 5;              // 2 bytes: -32,768 to 32,767
    long int c = 1000000;         // 4 bytes (at least): -2^31 to 2^31-1
    long long int d = 1000000000; // 8 bytes: -2^63 to 2^63-1
    
    // Unsigned integer data types (only positive values)
    unsigned int e = 10;          // 4 bytes: 0 to 2^32-1
    unsigned short f = 5;         // 2 bytes: 0 to 65,535
    unsigned long g = 1000000;    // 4 bytes: 0 to 2^32-1
    unsigned long long h = 1000000000; // 8 bytes: 0 to 2^64-1
    
    // Floating-point data types
    float i = 10.5f;              // 4 bytes: 7 decimal digits precision
    double j = 10.123456789;      // 8 bytes: 15 decimal digits precision
    long double k = 10.123456789; // 12 bytes (typically): greater precision than double
    
    // Character data types
    char l = 'A';                 // 1 byte: -128 to 127 or 0 to 255
    wchar_t m = L'Ω';             // 2 or 4 bytes: for wide characters
    
    // Boolean data type
    bool n = true;                // 1 byte: true or false
    
    // String data type (actually a class in C++)
    string o = "Hello World";     // Dynamic size
    
    // Print values of the stored variables
    cout << "Integer values:" << endl;
    cout << "int a = " << a << endl;
    cout << "short int b = " << b << endl;
    cout << "long int c = " << c << endl;
    cout << "long long int d = " << d << endl;
    
    cout << "\nUnsigned integer values:" << endl;
    cout << "unsigned int e = " << e << endl;
    cout << "unsigned short f = " << f << endl;
    cout << "unsigned long g = " << g << endl;
    cout << "unsigned long long h = " << h << endl;
    
    cout << "\nFloating-point values:" << endl;
    cout << "float i = " << i << endl;
    cout << "double j = " << j << endl;
    cout << "long double k = " << k << endl;
    
    cout << "\nCharacter values:" << endl;
    cout << "char l = '" << l << "'" << endl;
    cout << "wchar_t m = '" << m << "'" << endl;
    
    cout << "\nBoolean value:" << endl;
    cout << "bool n = " << (n ? "true" : "false") << endl;
    
    cout << "\nString value:" << endl;
    cout << "string o = \"" << o << "\"" << endl;
    
    cout << "\n------------------------" << endl;
    
    // Print sizes of various data types
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of long long int: " << sizeof(long long int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
    cout << "Size of string: Variable (current example: " << sizeof(o) << " bytes)" << endl;
    
    // Demo input
    int x;
    cout << "\nEnter a number: ";
    cin >> x;
    cout << "Value of x is: " << x << endl;
    
    return 0;
}

// PS D:\code\Leet-Code>  & 'c:\Users\allen\.vscode\extensions\ms-vscode.cpptools-1.25.3-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-dt231qua.wgj' '--stdout=Microsoft-MIEngine-Out-ssdb5g1a.z4n' '--stderr=Microsoft-MIEngine-Error-htkj0sft.zm1' '--pid=Microsoft-MIEngine-Pid-jqapkagj.pcj' '--dbgExe=C:\ProgramData\mingw64\mingw64\bin\gdb.exe' '--interpreter=mi' 
// Integer values:
// int a = 10
// short int b = 5
// long int c = 1000000
// long long int d = 1000000000

// Unsigned integer values:
// unsigned int e = 10
// unsigned short f = 5
// unsigned long g = 1000000
// unsigned long long h = 1000000000

// Floating-point values:
// float i = 10.5
// double j = 10.1235
// long double k = 10.1235

// Character values:
// char l = 'A'
// wchar_t m = '937'

// Boolean value:
// bool n = true

// String value:
// string o = "Hello World"

// ------------------------
// Size of int: 4 bytes
// Size of short int: 2 bytes
// Size of long int: 4 bytes
// Size of long long int: 8 bytes
// Size of float: 4 bytes
// Size of double: 8 bytes
// Size of char: 1 byte
// Size of bool: 1 byte
// Size of string: Variable (current example: 32 bytes)

// Enter a number: 3
// Value of x is: 3
// PS D:\code\Leet-Code> 