const App = () => (
  <div className="container border py-5">
    
    <div className="row">
      <div className="col-sm-12 col-md-3 col-lg-3">
        <div className="p-4 bg-primary">

        </div>
        
      </div>
      <div className="col-sm-12 col-md-9 col-lg-9">
        <div className="p-4 bg-primary">

        </div>
      </div>

    </div>

    <div className="row">
      {/* .col-sm-12.col-md-6.col-lg-4.bg-info.p-4*3 */}
      <div className="col-sm-12 col-md-6 col-lg-4">
        <div className="bg-info p-4 border"></div>
      </div>
      <div className="col-sm-12 col-md-6 col-lg-4">
        <div className="bg-info p-4 border"></div>
      </div>
      <div className="col-sm-12 col-md-12 col-lg-4">
        <div className="bg-info p-4 border"></div>
      </div>
    </div>

    <div className="row">
      <div className="col-12">
        <div className="bg-success p-4"></div>
      </div>
    </div>
  </div>
)

export default App