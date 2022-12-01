import { writeFile, access } from "node:fs/promises";

const createReadMe = async (file, data) => {
    const folder = file.replace("README.md", "");
    try {
        console.log(file, data);
        const isFolder = await access(folder);
        if(isFolder) await writeFile(file, data)
    } catch(e) {
        console.log(e);
    }
}

let str = "# Introduction \n\n";
str += "This is a practise project doing\n\n";
str += "## Table of Content\n\n";
for(let i=1; i<25; i++) {
    let file;
    if(i==1) {
        str += i+'. [Day '+i+'](day%20'+i+'/README.md)\n';
        file = 'day\ '+i+'/README.md';
        createReadMe(file, "[<back](../README.md)\n\n# Day "+i+"\n\nWorked on...");
        continue;
    }
    str += i+'. [Day'+i+'](day'+i+'/README.md)\n';
    file = 'day'+i+'/README.md';
    console.log(file);
    createReadMe(file, "[<back](../README.md)\n\n# Day "+i+"\n\nWorked on...")
}

await createReadMe('README.md', str);
