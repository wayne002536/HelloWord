/* soapClient.cpp
   Generated by gSOAP 2.8.38 for outfile.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.8.38 2016-11-24 13:42:01 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns2__add(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double &result)
{	struct ns2__add soap_tmp_ns2__add;
	struct ns2__addResponse *soap_tmp_ns2__addResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";
	if (soap_action == NULL)
		soap_action = "";
	soap_tmp_ns2__add.a = a;
	soap_tmp_ns2__add.b = b;
	soap_begin(soap);
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_serializeheader(soap);
	soap_serialize_ns2__add(soap, &soap_tmp_ns2__add);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns2__add(soap, &soap_tmp_ns2__add, "ns2:add", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns2__add(soap, &soap_tmp_ns2__add, "ns2:add", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<double*>(&result)) // NULL ref?
		return soap_closesock(soap);
	soap_default_double(soap, &result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns2__addResponse = soap_get_ns2__addResponse(soap, NULL, "", NULL);
	if (!soap_tmp_ns2__addResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	result = soap_tmp_ns2__addResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns2__sub(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double &result)
{	struct ns2__sub soap_tmp_ns2__sub;
	struct ns2__subResponse *soap_tmp_ns2__subResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";
	if (soap_action == NULL)
		soap_action = "";
	soap_tmp_ns2__sub.a = a;
	soap_tmp_ns2__sub.b = b;
	soap_begin(soap);
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_serializeheader(soap);
	soap_serialize_ns2__sub(soap, &soap_tmp_ns2__sub);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns2__sub(soap, &soap_tmp_ns2__sub, "ns2:sub", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns2__sub(soap, &soap_tmp_ns2__sub, "ns2:sub", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<double*>(&result)) // NULL ref?
		return soap_closesock(soap);
	soap_default_double(soap, &result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns2__subResponse = soap_get_ns2__subResponse(soap, NULL, "", NULL);
	if (!soap_tmp_ns2__subResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	result = soap_tmp_ns2__subResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns2__mul(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double &result)
{	struct ns2__mul soap_tmp_ns2__mul;
	struct ns2__mulResponse *soap_tmp_ns2__mulResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";
	if (soap_action == NULL)
		soap_action = "";
	soap_tmp_ns2__mul.a = a;
	soap_tmp_ns2__mul.b = b;
	soap_begin(soap);
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_serializeheader(soap);
	soap_serialize_ns2__mul(soap, &soap_tmp_ns2__mul);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns2__mul(soap, &soap_tmp_ns2__mul, "ns2:mul", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns2__mul(soap, &soap_tmp_ns2__mul, "ns2:mul", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<double*>(&result)) // NULL ref?
		return soap_closesock(soap);
	soap_default_double(soap, &result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns2__mulResponse = soap_get_ns2__mulResponse(soap, NULL, "", NULL);
	if (!soap_tmp_ns2__mulResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	result = soap_tmp_ns2__mulResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns2__div(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double &result)
{	struct ns2__div soap_tmp_ns2__div;
	struct ns2__divResponse *soap_tmp_ns2__divResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";
	if (soap_action == NULL)
		soap_action = "";
	soap_tmp_ns2__div.a = a;
	soap_tmp_ns2__div.b = b;
	soap_begin(soap);
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_serializeheader(soap);
	soap_serialize_ns2__div(soap, &soap_tmp_ns2__div);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns2__div(soap, &soap_tmp_ns2__div, "ns2:div", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns2__div(soap, &soap_tmp_ns2__div, "ns2:div", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<double*>(&result)) // NULL ref?
		return soap_closesock(soap);
	soap_default_double(soap, &result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns2__divResponse = soap_get_ns2__divResponse(soap, NULL, "", NULL);
	if (!soap_tmp_ns2__divResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	result = soap_tmp_ns2__divResponse->result;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns2__pow(struct soap *soap, const char *soap_endpoint, const char *soap_action, double a, double b, double &result)
{	struct ns2__pow soap_tmp_ns2__pow;
	struct ns2__powResponse *soap_tmp_ns2__powResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://websrv.cs.fsu.edu/~engelen/calcserver.cgi";
	if (soap_action == NULL)
		soap_action = "";
	soap_tmp_ns2__pow.a = a;
	soap_tmp_ns2__pow.b = b;
	soap_begin(soap);
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_serializeheader(soap);
	soap_serialize_ns2__pow(soap, &soap_tmp_ns2__pow);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns2__pow(soap, &soap_tmp_ns2__pow, "ns2:pow", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns2__pow(soap, &soap_tmp_ns2__pow, "ns2:pow", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<double*>(&result)) // NULL ref?
		return soap_closesock(soap);
	soap_default_double(soap, &result);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns2__powResponse = soap_get_ns2__powResponse(soap, NULL, "", NULL);
	if (!soap_tmp_ns2__powResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	result = soap_tmp_ns2__powResponse->result;
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.cpp */
