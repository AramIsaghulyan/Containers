#include <iostream>
#ifndef _STRING_
#define _STRING_


class String
{
    public:
    // constructor
    String (const char * s);
    String ();
    String (const String &);
    ~String ();
    int lenght () const {return m_len;}
    // friend function
    friend bool operator < (const String &st, const String &st2);
    friend bool operator > (const String &st, const String &st2);
    friend bool operator == (const String &st, const String &st2);
    friend std::istream& operator >> (std::istream & is, String & st);
    friend std::ostream& operator << (std::ostream & os,const String & st);
    // Методы перегруженных операций
    String & operator = (const String &);
    String & operator = (const char *);
    char & operator [] (int i);
    const char & operator[] (int i) const;
    // Статическая функция
    static int HowMany ();

    private:
    
    int m_len;
    char * m_str;
    static const int CINLIM = 80;
};
#endif // _STRING_