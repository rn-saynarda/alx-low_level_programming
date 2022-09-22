/** 
  *_strcat - serves to concatenate @src to @dest 
  * @src: the source string to be appended to @dest 
  * @dest: the destiation string to be concatenated upon 
  * Return:pointer to the resulting string 
  */ 
 char *_strcat(char *dest, char *src) 
 { 
 int index = 0; 
 int dest_len = 0; 
 while (dest[index++]) 
 dest_len++; 
 for (index = 0; src[index]; index++) 
 dest[dest_len++] = src[index]; 
 return (dest); 
 }