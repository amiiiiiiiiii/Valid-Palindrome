#include <string.h>
#include <stdbool.h>
bool isAlphanumeric(char c) 
{
    if ((c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z') ||
        (c >= '0' && c <= '9')) 
    {
        return true;
    }
    return false;
}
char toLowerCase(char c) 
{
    if (c >= 'A' && c <= 'Z') 
    {
        return c + 32;   // ASCII conversion
    }
    return c;
}
bool isPalindrome(char* s) 
{
    int left = 0;
    int right = strlen(s) - 1;
    while (left < right) 
    {
        while (left < right && !isAlphanumeric(s[left])) 
        {
            left++;
        }
        while (left < right && !isAlphanumeric(s[right])) 
        {
            right--;
        }
        if (toLowerCase(s[left]) != toLowerCase(s[right])) 
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
