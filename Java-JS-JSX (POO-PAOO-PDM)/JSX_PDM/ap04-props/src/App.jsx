const App = () => (
  <div className="container border mt-2">

    <div className="row">
      <div className="col-12">
        {/* .i.fa.fa-hippo */}
        <div className="fa fa-hippo fa-2x p-3"></div>
      </div>
    </div>

    <div className="row">
      {/* .col-sm-12.col-lg-6.col-xxl-3*4    */}
      <div className="col-sm-12 col-lg-6 col-xxl-3">
        <div className="py-2 border">Pedido 1</div>
      </div>
      <div className="col-sm-12 col-lg-6 col-xxl-3">
        <div className="py-2 border">Pedido 2</div>
      </div>
      <div className="col-sm-12 col-lg-6 col-xxl-3">
        <div className="py-2 border">Pedido 3</div>
      </div>
      <div className="col-sm-12 col-lg-6 col-xxl-3">
        <div className="py-2 border">Pedido 4</div>
       </div>   
    </div>
  </div>
)


export default App