import React from "react";
import Contacts from "../contacts";
// we would have also created the card component in oother card.jsx file and passed data rom the app jsx
function Card(props) {
  return (
    <div className="card">
      <div className="top">
        <h2 className="name">{Contacts[props.index].name}</h2>
        <img
          className="circle-img"
          src={Contacts[props.index].imgURL}
          alt="avatar_img"
        />
      </div>
      <div className="bottom ">
        <p className="info">{Contacts[props.index].phone}</p>
        <p className="info">{Contacts[props.index].email}</p>
      </div>
    </div>
  );
}
function App() {
  return (
    <div>
      <h1 className="heading">My Contacts</h1>
      <Card index="0" />
      <Card index="1" />
      <Card index="2" />
    </div>
  );
}

export default App;
