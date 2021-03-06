﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to describe a <a>MethodResponse</a> resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetMethodResponseRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetMethodResponseRequest : public APIGatewayRequest
  {
  public:
    GetMethodResponseRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetMethodResponseRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetMethodResponseRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetMethodResponseRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>The <a>Resource</a> identifier for the <a>MethodResponse</a> resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The <a>Resource</a> identifier for the <a>MethodResponse</a> resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The <a>Resource</a> identifier for the <a>MethodResponse</a> resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The <a>Resource</a> identifier for the <a>MethodResponse</a> resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The <a>Resource</a> identifier for the <a>MethodResponse</a> resource.</p>
     */
    inline GetMethodResponseRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The <a>Resource</a> identifier for the <a>MethodResponse</a> resource.</p>
     */
    inline GetMethodResponseRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The <a>Resource</a> identifier for the <a>MethodResponse</a> resource.</p>
     */
    inline GetMethodResponseRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline GetMethodResponseRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline GetMethodResponseRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline GetMethodResponseRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


    /**
     * <p>The status code for the <a>MethodResponse</a> resource.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code for the <a>MethodResponse</a> resource.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code for the <a>MethodResponse</a> resource.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The status code for the <a>MethodResponse</a> resource.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>The status code for the <a>MethodResponse</a> resource.</p>
     */
    inline GetMethodResponseRequest& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code for the <a>MethodResponse</a> resource.</p>
     */
    inline GetMethodResponseRequest& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>The status code for the <a>MethodResponse</a> resource.</p>
     */
    inline GetMethodResponseRequest& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
