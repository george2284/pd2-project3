#include "Cube.h"
#include<QGraphicsPixmapItem>
#include<QObject>
#include <ctime>
//*****COLOR*****
//Yellow(Amber or Topaz):0
//Purple(Amethyst):1
//Green(Emerald):2
//Red(Ruby):3
//Blue(Sapphire):4
//*****TYPE*****
//Regular:0
//Verticle:1
//Horizon:2
//Round:3
//Pearl:4
Cubes::Cubes(){
}
Cubes::Cubes(int i, int j){
    this->color=i;this->type=j;this->selected=false;
    if(!selected){
        if(type==0){
            switch(color){
            case 0:this->pic=(QPixmap(":/picture/project3/amber.jpg"));break;
            case 1:this->pic=(QPixmap(":/picture/project3/amethyst.jpg"));break;
            case 2:this->pic=(QPixmap(":/picture/project3/emerald.jpg"));break;
            case 3:this->pic=(QPixmap(":/picture/project3/ruby.jpg"));break;
            case 4:this->pic=(QPixmap(":/picture/project3/sapphire.jpg"));break;
            default:break;
            }
        }
        else if(type==1){
            switch(color){
            case 0:this->pic=(QPixmap(":/picture/project3/amber_verticle.jpg"));break;
            case 1:this->pic=(QPixmap(":/picture/project3/amethyst_verticle.jpg"));break;
            case 2:this->pic=(QPixmap(":/picture/project3/emerald_verticle.jpg"));break;
            case 3:this->pic=(QPixmap(":/picture/project3/ruby_verticle.jpg"));break;
            case 4:this->pic=(QPixmap(":/picture/project3/sapphire_verticle.jpg"));break;
            default:break;
            }
        }
        else if(type==2){
            switch(color){
            case 0:this->pic=(QPixmap(":/picture/project3/amber_horizon.jpg"));break;
            case 1:this->pic=(QPixmap(":/picture/project3/amethyst_horizon.jpg"));break;
            case 2:this->pic=(QPixmap(":/picture/project3/emerald_horizon.jpg"));break;
            case 3:this->pic=(QPixmap(":/picture/project3/ruby_horizon.jpg"));break;
            case 4:this->pic=(QPixmap(":/picture/project3/sapphire_horizon.jpg"));break;
            default:break;
            }
        }
        else if(type==3){
            switch(color){
            case 0:this->pic=(QPixmap(":/picture/project3/topaz_round.jpg"));break;
            case 1:this->pic=(QPixmap(":/picture/project3/amethyst_round.jpg"));break;
            case 2:this->pic=(QPixmap(":/picture/project3/emerald_round.jpg"));break;
            case 3:this->pic=(QPixmap(":/picture/project3/ruby_round.jpg"));break;
            case 4:this->pic=(QPixmap(":/picture/project3/sapphire_round.jpg"));break;
            default:break;
            }
        }
        else this->pic=(QPixmap(":/picture/project3/pearl.jpg"));
    }
    else{
        if(type==0){
            switch(color){
            case 0:this->pic=(QPixmap(":/picture/project3/amber_selected.jpg"));break;
            case 1:this->pic=(QPixmap(":/picture/project3/amethyst_selected.jpg"));break;
            case 2:this->pic=(QPixmap(":/picture/project3/emerald_selected.jpg"));break;
            case 3:this->pic=(QPixmap(":/picture/project3/ruby_selected.jpg"));break;
            case 4:this->pic=(QPixmap(":/picture/project3/sapphire_selected.jpg"));break;
            default:break;
            }
        }
        else if(type==1){
            switch(color){
            case 0:this->pic=(QPixmap(":/picture/project3/amber_verticle_selected.jpg"));break;
            case 1:this->pic=(QPixmap(":/picture/project3/amethyst_verticle_selected.jpg"));break;
            case 2:this->pic=(QPixmap(":/picture/project3/emerald_verticle_selected.jpg"));break;
            case 3:this->pic=(QPixmap(":/picture/project3/ruby_verticle_selected.jpg"));break;
            case 4:this->pic=(QPixmap(":/picture/project3/sapphire_verticle_selected.jpg"));break;
            default:break;
            }
        }
        else if(type==2){
            switch(color){
            case 0:this->pic=(QPixmap(":/picture/project3/amber_horizon_selected.jpg"));break;
            case 1:this->pic=(QPixmap(":/picture/project3/amethyst_horizon_selected.jpg"));break;
            case 2:this->pic=(QPixmap(":/picture/project3/emerald_horizon_selected.jpg"));break;
            case 3:this->pic=(QPixmap(":/picture/project3/ruby_horizon_selected.jpg"));break;
            case 4:this->pic=(QPixmap(":/picture/project3/sapphire_horizon_selected.jpg"));break;
            default:break;
            }
        }
        else if(type==3){
            switch(color){
            case 0:this->pic=(QPixmap(":/picture/project3/topaz_round_selected.jpg"));break;
            case 1:this->pic=(QPixmap(":/picture/project3/amethyst_round_selected.jpg"));break;
            case 2:this->pic=(QPixmap(":/picture/project3/emerald_round_selected.jpg"));break;
            case 3:this->pic=(QPixmap(":/picture/project3/ruby_round_selected.jpg"));break;
            case 4:this->pic=(QPixmap(":/picture/project3/sapphire_round_selected.jpg"));break;
            default:break;
            }
        }
        else this->pic=(QPixmap(":/picture/project3/pearl_selected.jpg"));
    }
}
void Cubes::setPicture(int i,int j,bool k){
    if(!k){
        if(j==0){
            switch(i){
            case 0:pic=(QPixmap(":/picture/project3/amber.jpg"));break;
            case 1:pic=(QPixmap(":/picture/project3/amethyst.jpg"));break;
            case 2:pic=(QPixmap(":/picture/project3/emerald.jpg"));break;
            case 3:pic=(QPixmap(":/picture/project3/ruby.jpg"));break;
            case 4:pic=(QPixmap(":/picture/project3/sapphire.jpg"));break;
            default:break;
            }
        }
        else if(j==1){
            switch(i){
            case 0:pic=(QPixmap(":/picture/project3/amber_verticle.jpg"));break;
            case 1:pic=(QPixmap(":/picture/project3/amethyst_verticle.jpg"));break;
            case 2:pic=(QPixmap(":/picture/project3/emerald_verticle.jpg"));break;
            case 3:pic=(QPixmap(":/picture/project3/ruby_verticle.jpg"));break;
            case 4:pic=(QPixmap(":/picture/project3/sapphire_verticle.jpg"));break;
            default:break;
            }
        }
        else if(j==2){
            switch(i){
            case 0:pic=(QPixmap(":/picture/project3/amber_horizon.jpg"));break;
            case 1:pic=(QPixmap(":/picture/project3/amethyst_horizon.jpg"));break;
            case 2:pic=(QPixmap(":/picture/project3/emerald_horizon.jpg"));break;
            case 3:pic=(QPixmap(":/picture/project3/ruby_horizon.jpg"));break;
            case 4:pic=(QPixmap(":/picture/project3/sapphire_horizon.jpg"));break;
            default:break;
            }
        }
        else if(j==3){
            switch(i){
            case 0:pic=(QPixmap(":/picture/project3/topaz_round.jpg"));break;
            case 1:pic=(QPixmap(":/picture/project3/amethyst_round.jpg"));break;
            case 2:pic=(QPixmap(":/picture/project3/emerald_round.jpg"));break;
            case 3:pic=(QPixmap(":/picture/project3/ruby_round.jpg"));break;
            case 4:pic=(QPixmap(":/picture/project3/sapphire_round.jpg"));break;
            default:break;
            }
        }
        else pic=(QPixmap(":/picture/project3/pearl.jpg"));
    }
    else{
        if(j==0){
            switch(i){
            case 0:pic=(QPixmap(":/picture/project3/amber_selected.jpg"));break;
            case 1:pic=(QPixmap(":/picture/project3/amethyst_selected.jpg"));break;
            case 2:pic=(QPixmap(":/picture/project3/emerald_selected.jpg"));break;
            case 3:pic=(QPixmap(":/picture/project3/ruby_selected.jpg"));break;
            case 4:pic=(QPixmap(":/picture/project3/sapphire_selected.jpg"));break;
            default:break;
            }
        }
        else if(j==1){
            switch(i){
            case 0:pic=(QPixmap(":/picture/project3/amber_verticle_selected.jpg"));break;
            case 1:pic=(QPixmap(":/picture/project3/amethyst_verticle_selected.jpg"));break;
            case 2:pic=(QPixmap(":/picture/project3/emerald_verticle_selected.jpg"));break;
            case 3:pic=(QPixmap(":/picture/project3/ruby_verticle_selected.jpg"));break;
            case 4:pic=(QPixmap(":/picture/project3/sapphire_verticle_selected.jpg"));break;
            default:break;
            }
        }
        else if(j==2){
            switch(i){
            case 0:pic=(QPixmap(":/picture/project3/amber_horizon_selected.jpg"));break;
            case 1:pic=(QPixmap(":/picture/project3/amethyst_horizon_selected.jpg"));break;
            case 2:pic=(QPixmap(":/picture/project3/emerald_horizon_selected.jpg"));break;
            case 3:pic=(QPixmap(":/picture/project3/ruby_horizon_selected.jpg"));break;
            case 4:pic=(QPixmap(":/picture/project3/sapphire_horizon_selected.jpg"));break;
            default:break;
            }
        }
        else if(j==3){
            switch(i){
            case 0:pic=(QPixmap(":/picture/project3/topaz_round_selected.jpg"));break;
            case 1:pic=(QPixmap(":/picture/project3/amethyst_round_selected.jpg"));break;
            case 2:pic=(QPixmap(":/picture/project3/emerald_round_selected.jpg"));break;
            case 3:pic=(QPixmap(":/picture/project3/ruby_round_selected.jpg"));break;
            case 4:pic=(QPixmap(":/picture/project3/sapphire_round_selected.jpg"));break;
            default:break;
            }
        }
        else pic=(QPixmap(":/picture/project3/pearl_selected.jpg"));
    }
}
