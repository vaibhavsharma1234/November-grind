const pi = 3.14;
export default pi;
function doublepi() {
  return pi * 2;
}
function triplepi() {
  return pi * 3;
}
// the thing i want to export
export { doublepi, triplepi };
