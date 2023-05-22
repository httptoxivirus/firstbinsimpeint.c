#include<stdio.h>
int main() {
    FILE *fp = fopen("first.bin","wb");
    int a;
    char str[20];
    scanf("%d",&a);
    fwrite(&a,1,sizeof(a),fp);
    fclose(fp);
    fp = fopen("first.bin","rb");
    fread(&a,1,sizeof(a),fp);
    printf("%d",a);
    fclose(fp);
    return 0;
}
