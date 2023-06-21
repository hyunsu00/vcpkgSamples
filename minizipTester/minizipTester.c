#include <stdio.h> // printf
#include "miniunz.h"
#include <sys/stat.h> // mkdir

/*
S_IRUSR : (00400) - owner에 대한 읽기 권한
S_IWUSR : (00200) - owner에 대한 쓰기 권한
S_IXUSR : (00100) - owner에 대한 search 권한
S_IRGRP : (00040) - Group에 대한 읽기 권한
S_IWGRP : (00020) - Group에 대한 쓰기 권한
S_IXGRP : (00010) - Group에 대한 search 권한
S_IROTH : (00004) - Other에 대한 읽기 권한
S_IWOTH : (00002) - Other에 대한 쓰기 권한
S_IXOTH : (00001) - Other에 대한 search 권한
== 0777
*/
#define	S_FULL	(S_IRWXU|S_IRWXG|S_IRWXO)
#define DR_NAME "result"

int main(int argc, char *argv[])
{
    printf("minizipTester\n");

    // mkdir(DR_NAME, S_FULL);
    // int ret = unzip("sample.hwpx", DR_NAME);

    // printf("unz() ret = %d\n", ret);
    return 0;
}
