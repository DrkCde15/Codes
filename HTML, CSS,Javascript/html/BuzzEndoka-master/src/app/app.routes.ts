import { RouterModule, Routes } from '@angular/router';
import { VitrineComponent } from './vitrine/vitrine.component';
import { DetalhesComponent } from './detalhes/detalhes.component';
import { CestaComponent } from './cesta/cesta.component';
import { LoginComponent } from './usuario/login/login.component';
import { CadastroComponent } from './usuario/cadastro/cadastro.component';

export const routes: Routes = [
    {path:"vitrine", component:VitrineComponent},
    {path:"", component:VitrineComponent},
    {path:"cesta", component:CestaComponent},
    {path:"login", component:LoginComponent},
    {path:"cadastro", component:CadastroComponent},
    { path: "detalhes", component: DetalhesComponent }
];