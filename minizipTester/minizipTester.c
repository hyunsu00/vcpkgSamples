#include <stdio.h> // printf
#include "miniunz.h"
#include <sys/stat.h> // mkdir
#include <string.h> // strcpy, strrchr
#include <minizip/unzip.h>

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

void createDirectory(const char* path, mode_t mode) {
    char parentDir[256] = {0, };
    strcpy(parentDir, path);

    char* delimiter = strrchr(parentDir, '/');
    if (delimiter != NULL) {
        *delimiter = '\0';
        createDirectory(parentDir, mode);
    }

    int result = mkdir(path, mode);
    if (result == 0) {
        printf("Directory created: %s\n", path);
    } else {
        printf("Failed to create directory: %s\n", path);
    }
}

int main(int argc, char *argv[])
{
    printf("minizipTester\n");

    if (argc != 3) {
        printf("argc != %d\n", argc);
        return -1;
    }

    createDirectory(argv[2], S_FULL);
    int ret = unzip(argv[1], argv[2]);
    printf("unzip(argv[1], argv[2]) = %d\n", ret);
    return 0;
}
