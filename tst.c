char c;
float v1, v2;
FILE* fp;
char linha[121];
...
while (fgets(linha,121,fp)) {
int n = sscanf(linha," %c %f %f",&c,&v1,&v2);
if (n>0) {
switch(c) {
case '#':
/* desprezar linha de comentário */
break;
case 'r':
if (n!=3) {
/* tratar erro de formato do arquivo */
}
else {
/* interpretar retângulo: base = v1, altura = v2 */
...
}
break;
case 't':
if (n!=3) {
/* tratar erro de formato do arquivo */
...
}
else {
/* interpretar triângulo: base = v1, altura = v2 */
...
}
break;
case 'c':
if (n!=2) {
/* tratar erro de formato do arquivo */
...
}
else {
/* interpretar círculo: raio = v1 */
...
}
break;
default:
/* tratar erro de formato do arquivo */
...
break;
}
}
}
