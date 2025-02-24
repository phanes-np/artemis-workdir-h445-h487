void DqDx_103test(){

//set dir  

  printf("set runnumber\n");
  char runnumber[10];
  scanf("%s",runnumber);
  char runnumber2[10];
  sprintf(runnumber2,"%s",runnumber);
  char mkdu[30];
  sprintf(mkdu,".! mkdir -p prm/srppac/sr11/dq2dx/%s",runnumber);

  gROOT->ProcessLine(mkdu);

//upstream

//  TH1D *hsrux = (TH1D*)gROOT->FindObject("sr11_x_q0q1");
  TH1D *hsrux = (TH1D*)gROOT->FindObject("sr11_x_q0q1_idhitgate");
//  TH1D *hsrux = (TH1D*)gROOT->FindObject("sr11_x_q0q1_idgate");

  double totsrux=hsrux->Integral();
  hsrux->Scale(1./totsrux);

  char filenamesrux[50];
  sprintf(filenamesrux,"prm/srppac/sr11/dq2dx/%s/xc0.dat",runnumber);
  std::ofstream outfilesrux;
  outfilesrux.open(filenamesrux, std::ios::out);
//  outfilesrux << 200 << "\n";
//  for(int i=1;i<201;i++){
//     double tsrux = hsrux->Integral(1,i);
//     double asrux =    0.2/200 *i;
//     outfilesrux << asrux << " " << tsrux << "\n";
//   }
  outfilesrux << 150 << "\n";
  for(int i=1;i<151;i++){
     double tsrux = hsrux->Integral(1,i);
     double asrux =    0.15/150 *i;
     outfilesrux << asrux << " " << tsrux << "\n";
   }
 
   outfilesrux.close();


//  TH1D *hsruy = (TH1D*)gROOT->FindObject("sr11_y_q0q1");
  TH1D *hsruy = (TH1D*)gROOT->FindObject("sr11_y_q0q1_idhitgate");
//  TH1D *hsruy = (TH1D*)gROOT->FindObject("sr11_y_q0q1_idgate");

  double totsruy=hsruy->Integral();
  hsruy->Scale(1./totsruy);

  char filenamesruy[50];
  sprintf(filenamesruy,"prm/srppac/sr11/dq2dx/%s/yc0.dat",runnumber);
  std::ofstream outfilesruy;
  outfilesruy.open(filenamesruy, std::ios::out);
//  outfilesruy << 400 << "\n";
//  for(int i=1;i<401;i++){
//     double tsruy = hsruy->Integral(1,i);
//     double asruy =    0.4/400 *i;
//     outfilesruy << asruy << " " << tsruy << "\n";
//   }
  outfilesruy << 150 << "\n";
  for(int i=1;i<151;i++){
     double tsruy = hsruy->Integral(1,i);
     double asruy =    0.15/150 *i;
     outfilesruy << asruy << " " << tsruy << "\n";
   }
 

   outfilesruy.close();







}



