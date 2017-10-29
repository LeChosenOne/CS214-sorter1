#ifndef SORTER_H
#define SORTER_H
struct rStruct{
  char* color;
  char* director_name;
  int num_critic_for_reviews;
  int duration;
  int director_facebook_likes;
  int actor_3_facebook_likes;
  char * actor_2_name;
  int actor_1_facebook_likes;
  int gross;
  char * genres;
  char * actor_1_name;
  char * movie_title;
  int num_voted_users;
  int cast_total_facebook_likes;
  char * actor_3_name;
  int facenumber_in_poster;
  char * plot_keywords;
  char * movie_imdb_link;
  int num_user_for_reviews;
  char * language;
  char * country;
  char * content_rating;
  long budget;
  int title_year;
  int actor_2_facebook_likes;
  float imdb_score;
  float aspect_ratio;
  int movie_facebook_likes;

  struct rStruct * next;
};
typedef struct rStruct Record;

Record ** mergesort(Record **, int);
int count(Record **);
Record * split(Record **, int);
Record ** merge(Record **, Record **, int);
void sortFile(int sortByCol, DIR * outDir, FILE * sortFile, char * filename, char* sortName);
void sortCSVs(DIR * inputDir, char * inDir, DIR * outputDir, char * outDir, int sortByCol, char* sortName, int main_proc);


#endif
