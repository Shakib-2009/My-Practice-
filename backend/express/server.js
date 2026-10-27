import express from "express"
import path from "node:path";
import { fileURLToPath } from "node:url";

const app = express();
const directory = path.dirname(fileURLToPath(import.meta.url));
app.use("/calculator", express.static(path.join(directory, "../../javascript/calculator")));
app.get("/" , (req,res) =>{
       res.send("shakib");
    });

app.get("/about", (req , res) => {
    res.send("Assalamualaikum-shakib");
})
 
app.use((req, res) => res.status(404).send("Page not found"));

const server = app.listen(process.env.PORT || 3000, "127.0.0.1", () =>{
    console.log(`Server running at http://localhost:${server.address().port}`);
})

