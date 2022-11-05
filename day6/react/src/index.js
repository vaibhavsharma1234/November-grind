import React from "react";
import ReactDOM from "react-dom";
// import Heading from "./Heading";
// import List from "./List";
import App from "./componenets/App";
// components allow us to break website into compnents
// header ka componenet bnayga in reality its bigger. custom components that we build start with capital.
// if the component doesnt have anything bw then write that as a self closing tag
// function Heading() {
//   return <h1>My Favourite Foods</h1>;
// }
// we will import our heading componentfrom another file
// normally in react apps you will see  that they just have app compnent
// put all components in a component folder and we can further break components folder into other folder
ReactDOM.render(
  <div>
    {/* <Heading />
    <List /> */}
    <App />
  </div>,
  document.getElementById("root")
);
