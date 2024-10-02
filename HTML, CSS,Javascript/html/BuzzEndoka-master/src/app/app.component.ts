import { Component } from '@angular/core';
import { RouterOutlet } from '@angular/router';
import { VitrineComponent } from './vitrine/vitrine.component';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [RouterOutlet],
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  title = 'BuzzEndoka';
}
