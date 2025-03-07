char movies[][20] ={"Cinderella", "the Smurf Movie", "Transformers", "Cars", "Up", "1984"};
int mlength = sizeof(movies)/sizeof(movies[0]);
int m = 0;
while(m<mlength){
    printf("%s\n", movies[m]);
    m++;
}