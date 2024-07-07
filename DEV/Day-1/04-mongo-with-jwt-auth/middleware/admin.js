const { secret_key } = require("../config");
const jwt = require("jsonwebtoken");

// Middleware for handling auth
async function adminMiddleware(req, res, next) {
    // Implement admin auth logic
    // You need to check the headers and validate the admin from the admin DB. Check readme for the exact headers to be expected
    const token = req.headers.authorization;
    const jwtoken = token.split(" ")[1];
     
    const userValidated = await jwt.verify(jwtoken, secret_key);

    if(userValidated)
    {
        next();
    }
    else
    {
        res.status(411).json({
            msg : "unauthorized user"
        })
    }

    
}

module.exports = adminMiddleware;