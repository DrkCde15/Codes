import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import App from './components/App.jsx'
import 'primereact/resources/primereact.min.css'
import 'primereact/resources/themes/md-light-deeppurple/theme.css'
import 'primeicons/primeicons.css'
import 'primeflex/primeflex.min.css'

createRoot(document.getElementById('root')).render(
  <StrictMode>
    <App />
  </StrictMode>,
)
