#pragma once
const char INDEX_HTML[] PROGMEM  =  "<html>\r\n"
"<head>\r\n"
"    <meta charset=\"utf-8\">\r\n"
"    <meta name=\"viewport\" content=\"width=device-width,initial-scale=1\">\r\n"
"    <title>Sonoff web portal</title>\r\n"
"    <style>\r\n"
"            body {\r\n"
"                font-family: Arial,Helvetica,sans-serif;\r\n"
"                background: #181818;\r\n"
"                color: #EFEFEF;\r\n"
"                font-size: 16px\r\n"
"            }\r\n"
"            h2 {\r\n"
"                font-size: 18px\r\n"
"            }\r\n"
"            section.main {\r\n"
"                display: flex\r\n"
"            }\r\n"
"            #menu,section.main {\r\n"
"                flex-direction: column\r\n"
"            }\r\n"
"            #menu {\r\n"
"                display: none;\r\n"
"                flex-wrap: nowrap;\r\n"
"                min-width: 440px;\r\n"
"                background: #363636;\r\n"
"                padding: 8px;\r\n"
"                border-radius: 4px;\r\n"
"                margin-top: 10px;\r\n"
"                margin-right: 10px;\r\n"
"            }\r\n"
"            #content {\r\n"
"                display: flex;\r\n"
"                flex-wrap: wrap;\r\n"
"                align-items: stretch\r\n"
"            }\r\n"
"            figure {\r\n"
"                padding: 0px;\r\n"
"                margin: 0;\r\n"
"                -webkit-margin-before: 0;\r\n"
"                margin-block-start: 0;\r\n"
"                -webkit-margin-after: 0;\r\n"
"                margin-block-end: 0;\r\n"
"                -webkit-margin-start: 0;\r\n"
"                margin-inline-start: 0;\r\n"
"                -webkit-margin-end: 0;\r\n"
"                margin-inline-end: 0\r\n"
"            }\r\n"
"            figure img {\r\n"
"                display: block;\r\n"
"                width: 100%;\r\n"
"                height: auto;\r\n"
"                border-radius: 4px;\r\n"
"                margin-top: 8px;\r\n"
"            }\r\n"
"            @media (min-width: 800px) and (orientation:landscape) {\r\n"
"                #content {\r\n"
"                    display:flex;\r\n"
"                    flex-wrap: nowrap;\r\n"
"                    align-items: stretch\r\n"
"                }\r\n"
"                figure img {\r\n"
"                    display: block;\r\n"
"                    max-width: 100%;\r\n"
"                    max-height: calc(100vh - 40px);\r\n"
"                    width: auto;\r\n"
"                    height: auto\r\n"
"                }\r\n"
"                figure {\r\n"
"                    padding: 0 0 0 0px;\r\n"
"                    margin: 0;\r\n"
"                    -webkit-margin-before: 0;\r\n"
"                    margin-block-start: 0;\r\n"
"                    -webkit-margin-after: 0;\r\n"
"                    margin-block-end: 0;\r\n"
"                    -webkit-margin-start: 0;\r\n"
"                    margin-inline-start: 0;\r\n"
"                    -webkit-margin-end: 0;\r\n"
"                    margin-inline-end: 0\r\n"
"                }\r\n"
"            }\r\n"
"            section#buttons {\r\n"
"                display: flex;\r\n"
"                flex-wrap: nowrap;\r\n"
"                justify-content: space-between\r\n"
"            }\r\n"
"            #nav-toggle {\r\n"
"                cursor: pointer;\r\n"
"                display: block\r\n"
"            }\r\n"
"            #nav-toggle-cb {\r\n"
"                outline: 0;\r\n"
"                opacity: 0;\r\n"
"                width: 0;\r\n"
"                height: 0\r\n"
"            }\r\n"
"            #nav-toggle-cb:checked+#menu {\r\n"
"                display: flex\r\n"
"            }\r\n"
"            .input-group {\r\n"
"                display: flex;\r\n"
"                flex-wrap: nowrap;\r\n"
"                line-height: 22px;\r\n"
"                margin: 5px 0\r\n"
"            }\r\n"
"            .input-group>label {\r\n"
"                display: inline-block;\r\n"
"                padding-right: 10px;\r\n"
"                min-width: 47%\r\n"
"            }\r\n"
"            .input-group input,.input-group select {\r\n"
"                flex-grow: 1\r\n"
"            }\r\n"
"            .range-max,.range-min {\r\n"
"                display: inline-block;\r\n"
"                padding: 0 5px\r\n"
"            }\r\n"
"            button {\r\n"
"                display: block;\r\n"
"                margin: 5px;\r\n"
"                padding: 0 12px;\r\n"
"                border: 0;\r\n"
"                line-height: 28px;\r\n"
"                cursor: pointer;\r\n"
"                color: #fff;\r\n"
"                background: #ff3034;\r\n"
"                border-radius: 5px;\r\n"
"                font-size: 16px;\r\n"
"                outline: 0\r\n"
"            }\r\n"
"            button:hover {\r\n"
"                background: #ff494d\r\n"
"            }\r\n"
"            button:active {\r\n"
"                background: #f21c21\r\n"
"            }\r\n"
"            button.disabled {\r\n"
"                cursor: default;\r\n"
"                background: #a0a0a0\r\n"
"            }\r\n"
"            input[type=range] {\r\n"
"                -webkit-appearance: none;\r\n"
"                width: 100%;\r\n"
"                height: 22px;\r\n"
"                background: #363636;\r\n"
"                cursor: pointer;\r\n"
"                margin: 0\r\n"
"            }\r\n"
"            input[type=range]:focus {\r\n"
"                outline: 0\r\n"
"            }\r\n"
"            input[type=range]::-webkit-slider-runnable-track {\r\n"
"                width: 100%;\r\n"
"                height: 2px;\r\n"
"                cursor: pointer;\r\n"
"                background: #EFEFEF;\r\n"
"                border-radius: 0;\r\n"
"                border: 0 solid #EFEFEF\r\n"
"            }\r\n"
"            input[type=range]::-webkit-slider-thumb {\r\n"
"                border: 1px solid rgba(0,0,30,0);\r\n"
"                height: 22px;\r\n"
"                width: 22px;\r\n"
"                border-radius: 50px;\r\n"
"                background: #ff3034;\r\n"
"                cursor: pointer;\r\n"
"                -webkit-appearance: none;\r\n"
"                margin-top: -11.5px\r\n"
"            }\r\n"
"            input[type=range]:focus::-webkit-slider-runnable-track {\r\n"
"                background: #EFEFEF\r\n"
"            }\r\n"
"            input[type=range]::-moz-range-track {\r\n"
"                width: 100%;\r\n"
"                height: 2px;\r\n"
"                cursor: pointer;\r\n"
"                background: #EFEFEF;\r\n"
"                border-radius: 0;\r\n"
"                border: 0 solid #EFEFEF\r\n"
"            }\r\n"
"            input[type=range]::-moz-range-thumb {\r\n"
"                border: 1px solid rgba(0,0,30,0);\r\n"
"                height: 22px;\r\n"
"                width: 22px;\r\n"
"                border-radius: 50px;\r\n"
"                background: #ff3034;\r\n"
"                cursor: pointer\r\n"
"            }\r\n"
"            input[type=range]::-ms-track {\r\n"
"                width: 100%;\r\n"
"                height: 2px;\r\n"
"                cursor: pointer;\r\n"
"                background: 0 0;\r\n"
"                border-color: transparent;\r\n"
"                color: transparent\r\n"
"            }\r\n"
"            input[type=range]::-ms-fill-lower {\r\n"
"                background: #EFEFEF;\r\n"
"                border: 0 solid #EFEFEF;\r\n"
"                border-radius: 0\r\n"
"            }\r\n"
"            input[type=range]::-ms-fill-upper {\r\n"
"                background: #EFEFEF;\r\n"
"                border: 0 solid #EFEFEF;\r\n"
"                border-radius: 0\r\n"
"            }\r\n"
"            input[type=range]::-ms-thumb {\r\n"
"                border: 1px solid rgba(0,0,30,0);\r\n"
"                height: 22px;\r\n"
"                width: 22px;\r\n"
"                border-radius: 50px;\r\n"
"                background: #ff3034;\r\n"
"                cursor: pointer;\r\n"
"                height: 2px\r\n"
"            }\r\n"
"            input[type=range]:focus::-ms-fill-lower {\r\n"
"                background: #EFEFEF\r\n"
"            }\r\n"
"            input[type=range]:focus::-ms-fill-upper {\r\n"
"                background: #363636\r\n"
"            }\r\n"
"            .switch {\r\n"
"                display: block;\r\n"
"                position: relative;\r\n"
"                line-height: 22px;\r\n"
"                font-size: 16px;\r\n"
"                height: 22px\r\n"
"            }\r\n"
"            .switch input {\r\n"
"                outline: 0;\r\n"
"                opacity: 0;\r\n"
"                width: 0;\r\n"
"                height: 0\r\n"
"            }\r\n"
"            .slider {\r\n"
"                width: 50px;\r\n"
"                height: 22px;\r\n"
"                border-radius: 22px;\r\n"
"                cursor: pointer;\r\n"
"                background-color: grey\r\n"
"            }\r\n"
"            .slider,.slider:before {\r\n"
"                display: inline-block;\r\n"
"                transition: .4s\r\n"
"            }\r\n"
"            .slider:before {\r\n"
"                position: relative;\r\n"
"                content: \"\";\r\n"
"                border-radius: 50%;\r\n"
"                height: 16px;\r\n"
"                width: 16px;\r\n"
"                left: 4px;\r\n"
"                top: 3px;\r\n"
"                background-color: #fff\r\n"
"            }\r\n"
"            input:checked+.slider {\r\n"
"                background-color: #ff3034\r\n"
"            }\r\n"
"            input:checked+.slider:before {\r\n"
"                -webkit-transform: translateX(26px);\r\n"
"                transform: translateX(26px)\r\n"
"            }\r\n"
"            select {\r\n"
"                border: 1px solid #363636;\r\n"
"                font-size: 14px;\r\n"
"                height: 22px;\r\n"
"                outline: 0;\r\n"
"                border-radius: 5px\r\n"
"            }\r\n"
"            .image-container {\r\n"
"                position: relative;\r\n"
"                min-width: 160px\r\n"
"            }\r\n"
"            .close {\r\n"
"                position: absolute;\r\n"
"                right: 5px;\r\n"
"                top: 5px;\r\n"
"                background: #ff3034;\r\n"
"                width: 16px;\r\n"
"                height: 16px;\r\n"
"                border-radius: 100px;\r\n"
"                color: #fff;\r\n"
"                text-align: center;\r\n"
"                line-height: 18px;\r\n"
"                cursor: pointer\r\n"
"            }\r\n"
"            .hidden {\r\n"
"                display: none\r\n"
"            }\r\n"
"    .checkbox {\r\n"
"     position: absolute;\r\n"
"     z-index: -1;\r\n"
"     opacity: 0;\r\n"
"     margin: 10px 0 0 20px;\r\n"
"   }\r\n"
"   .checkbox + label {\r\n"
"     position: relative;\r\n"
"     padding: 0 0 0 60px;\r\n"
"     cursor: pointer;\r\n"
"   }\r\n"
"   .checkbox + label:before {\r\n"
"     content: '';\r\n"
"     position: absolute;\r\n"
"     top: -4px;\r\n"
"     left: 0;\r\n"
"     width: 50px;\r\n"
"     height: 26px;\r\n"
"     border-radius: 13px;\r\n"
"     background: #CDD1DA;\r\n"
"     box-shadow: inset 0 2px 3px rgba(0,0,0,.2);\r\n"
"     transition: .2s;\r\n"
"   }\r\n"
"   .checkbox + label:after {\r\n"
"     content: '';\r\n"
"     position: absolute;\r\n"
"     top: -2px;\r\n"
"     left: 2px;\r\n"
"     width: 22px;\r\n"
"     height: 22px;\r\n"
"     border-radius: 10px;\r\n"
"     background: #FFF;\r\n"
"     box-shadow: 0 2px 5px rgba(0,0,0,.3);\r\n"
"     transition: .2s;\r\n"
"   }\r\n"
"   .checkbox:checked + label:before {\r\n"
"     background: #9FD468;\r\n"
"   }\r\n"
"   .checkbox:checked + label:after {\r\n"
"     left: 26px;\r\n"
"   }\r\n"
"   .checkbox:focus + label:before {\r\n"
"     box-shadow: inset 0 2px 3px rgba(0,0,0,.2), 0 0 0 3px rgba(255,255,0,.7);\r\n"
"   }\r\n"
"    </style>\r\n"
"</head>\r\n"
"<body>\r\n"
"    <section class=\"main\">\r\n"
"        <div id=\"logo\">\r\n"
"            <label for=\"nav-toggle-cb\" id=\"nav-toggle\">☰&nbsp;&nbsp;Thermostat</label>\r\n"
"        </div>\r\n"
"        <div id=\"content\">\r\n"
"            <div id=\"sidebar\">\r\n"
"                <input type=\"checkbox\" id=\"nav-toggle-cb\" checked=\"checked\">\r\n"
"                <nav id=\"menu\">\r\n"
"               <div class=\"input-group\" id=\"temp-group\">\r\n"
"                           \r\n"
"              <input type=\"text\" id=\"temp\"  class=\"default-action\" >\r\n"
"              <label for=\"temp\">Themperature</label>\r\n"
"                        </div>\r\n"
"                       \r\n"
"               <div class=\"input-group\" id=\"hum-group\">\r\n"
"                           \r\n"
"              <input type=\"text\" id=\"hum\"  class=\"default-action\" >\r\n"
"              <label for=\"hum\">Humidity</label>\r\n"
"                        </div>\r\n"
"                       \r\n"
"                </nav>\r\n"
"            </div>\r\n"
"        </div>\r\n"
"    </section>\r\n"
"    <script>\r\n"
"document.addEventListener('DOMContentLoaded', function (event) {\r\n"
"    var baseHost = document.location.origin;\r\n"
"    \r\n"
"  function updateConfig (el,proto_val) {\r\n"
"      let value;\r\n"
"  \r\n"
"    switch (el.type) {\r\n"
"     case 'input':\r\n"
"            value = el.value;\r\n"
"            break;\r\n"
"     case 'range':\r\n"
"            value = el.value;\r\n"
"            break;\r\n"
"   case 'checkbox':\r\n"
"     value=el.checked;\r\n"
"     break;\r\n"
"      case 'button':\r\n"
"        case 'submit':\r\n"
"            if (proto_val) {\r\n"
"                value = proto_val;\r\n"
"            } else {\r\n"
"                value = '1';\r\n"
"            }\r\n"
"            break;\r\n"
"        default:\r\n"
"            return;\r\n"
"      };\r\n"
"      const query = `${baseHost}/set?var=${el.id}&val=${value}`;\r\n"
" console.log(query);\r\n"
"    fetch(query)\r\n"
"      .then(response => {\r\n"
"        console.log(`request to ${query} finished, status: ${response.status}`)\r\n"
"      })\r\n"
"    };\r\n"
" document\r\n"
"    .querySelectorAll('.default-action')\r\n"
"    .forEach(el => {\r\n"
"      el.onchange = () => updateConfig(el)\r\n"
"    });\r\n"
" \r\n"
"    \r\n"
" var tm=500;\r\n"
"  document\r\n"
"    .querySelectorAll('.default-action')\r\n"
"    .forEach(el => {\r\n"
"      el.onchange = () => updateConfig(el);\r\n"
"    })\r\n"
"  document\r\n"
"    .querySelectorAll('.default-action')\r\n"
"    .forEach(el => {\r\n"
"  function dofetch(el){\r\n"
" const query = `${baseHost}/get?var=${el.id}`;\r\n"
"   fetch(query)\r\n"
"   .then(response => response.text())\r\n"
" .then(val => {\r\n"
"   el.value=val;\r\n"
"   \r\n"
"   })\r\n"
"   }\r\n"
"   setTimeout(dofetch,tm,el); \r\n"
"   tm+=1000;\r\n"
"    })\r\n"
"})\r\n"
"    </script>\r\n"
"</body>\r\n"
"</html>\r\n";
