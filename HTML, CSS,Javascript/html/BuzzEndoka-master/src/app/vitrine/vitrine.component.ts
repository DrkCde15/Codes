import { Component } from '@angular/core';
import { Router } from '@angular/router';

interface produtos {
  id: number;
  title: string;
  price: string;
  image: string;
}

@Component({
  selector: 'app-vitrine',
  standalone: true,
  imports: [],
  templateUrl: './vitrine.component.html',
  styleUrl: './vitrine.component.css'
})
export class VitrineComponent {
  produto: produtos[] = [
    { id: 1, title: 'Produto 1', price: 'R$ 99,99', image: 'https://via.placeholder.com/150' },
    { id: 2, title: 'Produto 2', price: 'R$ 149,99', image: 'https://via.placeholder.com/150' },
    { id: 3, title: 'Produto 3', price: 'R$ 79,99', image: 'https://via.placeholder.com/150' },
    { id: 4, title: 'Produto 4', price: 'R$ 199,99', image: 'https://via.placeholder.com/150' }
  ];

  constructor(private router: Router) {}

  viewDetails(produto: produtos) {
    this.router.navigate(['/product', produto.id]);
  }
}