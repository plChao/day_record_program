#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>
#include <time.h>


using namespace std;

std::vector<char> v;
if (FILE *fp = fopen("filename", "r"))
{
    char buf[1024];
    while (size_t len = fread(buf, 1, sizeof(buf), fp))
        v.insert(v.end(), buf, buf + len);
    fclose(fp);
}

int main(){
    // declaring argument of time()
    time_t my_time = time(NULL);

    cout << ctime(&my_time);

    return 0;
}