//    *******  IMPORTANT   *********** 
//    Do not edit this file alone, GEdata_writer_CL.py output is
//    written to this file based on line replacements.  
//    If you edit this file, take appropriate actions in GEdata_writer_CL.py


void CL_define_npha_com() { 
  
  FILE *fp; 
  char name[1000]; 
  
  sprintf(name, "solverloop/defines.h"); 
  fp = fopen(name, "w"); 
  
  fprintf(fp, "//    *******  IMPORTANT   *********** \n");
  fprintf(fp, "//    Do not edit this file alone, GEdata_writer_CL.py output is \n");
  fprintf(fp, "//    written to this file based on line replacements.  \n");
  fprintf(fp, "//    If you edit this file, take appropriate actions in GEdata_writer_CL.py \n");
  fprintf(fp, "\n");
  fprintf(fp, "\n");
  fprintf(fp, "\n");
  
  fprintf(fp, "#define npha (%d)\n", NUMPHASES); 
  fprintf(fp, "#define ncom (%d)\n", NUMCOMPONENTS);
  fprintf(fp, "\n");
  fclose(fp);
  
}
 