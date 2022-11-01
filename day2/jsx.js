// require the react and react-dom
// var React = require("react");
import React from "react";
// var ReactDOM = require("react-dom");
import ReactDOM from "react-dom";
// ReactDOM.render(<h1>hello world</h1><p>hello</p>, document.getElementById("root"));
ReactDOM.render(
  <div>
    <h1>hello world</h1>
    <p>hello</p>
  </div>,
  document.getElementById("root")
);

//we are able to write html without any fancy ejs this majic is jsx
// reactdom(what to display,where to display,optional callback)
// files where we have html in js in jsx files.complier picks html and get converted or compliled into actual js. compiler comes from react file
// babel is a js compiler which takes next genartion and compile it so every browser body can understand this also works for jsx conversion to js
// so instead of writing ReactDOM.render( /*#__PURE__*/React.createElement("h1", null, "hello world"), document.getElementById("root")); this in pure js we write in jsx which gets converted into js by babel
// babel allow us to use es6 or es2015 we can use new concep which is converyted into browser understandable js
// instead of require the dependency the new way is to import it
// if we write two html in same render then code breaks butcan be solved if put under same div
