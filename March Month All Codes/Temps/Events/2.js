import http from 'http';
import nodemon from 'nodemon';
import url from 'url';
// const data = [
//     {
//         "name": "prash",
//         "age": 34
//     },
//     {
//         "name": "fake",
//         "age": 38
//     }
// ]
const port = 5000;

const server = http.createServer((req, res) => {
    console.log(req.url);
    
    res.end("Hello World");
});
server.listen(port, () => { 
    console.log(`Server Started ${port}`);
    
})