import nodemailer from "nodemailer";

async function mail() {
  try {
    let sender = nodemailer.createTransport({
      host: "cpl12.main-hosting.eu",
      port: 465,
      secure: true,
      auth: {
        user: "suhail@suhail.link",
        pass: "Suhail.link20@",
      },
    });

    let sending = await sender.sendMail({
      from: "suhail@suhail.link",
      to: "suhailroushan13@gmail.com",
      subject: "Hello Suhail",
      text: "This is a Text Message",
      html: "<h1> This is a HTML Message </h1>",
      attachments: [
          {
              filename: "file.txt",
              path: "./1.js"
       
        }
      ],
    });
    console.log(`Mail sent :%s`, sending.messageId);
  } catch (error) {
    console.log(error);
  }
}

mail();
