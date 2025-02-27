﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>When included in a receipt rule, this action adds a header to the received
   * email.</p> <p>For information about adding a header using a receipt rule, see
   * the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-action-add-header.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/AddHeaderAction">AWS
   * API Reference</a></p>
   */
  class AddHeaderAction
  {
  public:
    AWS_SES_API AddHeaderAction();
    AWS_SES_API AddHeaderAction(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API AddHeaderAction& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline const Aws::String& GetHeaderName() const{ return m_headerName; }

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline bool HeaderNameHasBeenSet() const { return m_headerNameHasBeenSet; }

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline void SetHeaderName(const Aws::String& value) { m_headerNameHasBeenSet = true; m_headerName = value; }

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline void SetHeaderName(Aws::String&& value) { m_headerNameHasBeenSet = true; m_headerName = std::move(value); }

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline void SetHeaderName(const char* value) { m_headerNameHasBeenSet = true; m_headerName.assign(value); }

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline AddHeaderAction& WithHeaderName(const Aws::String& value) { SetHeaderName(value); return *this;}

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline AddHeaderAction& WithHeaderName(Aws::String&& value) { SetHeaderName(std::move(value)); return *this;}

    /**
     * <p>The name of the header to add. Must be between 1 and 50 characters,
     * inclusive, and consist of alphanumeric (a-z, A-Z, 0-9) characters and dashes
     * only.</p>
     */
    inline AddHeaderAction& WithHeaderName(const char* value) { SetHeaderName(value); return *this;}


    /**
     * <p>Must be less than 2048 characters, and must not contain newline characters
     * ("\r" or "\n").</p>
     */
    inline const Aws::String& GetHeaderValue() const{ return m_headerValue; }

    /**
     * <p>Must be less than 2048 characters, and must not contain newline characters
     * ("\r" or "\n").</p>
     */
    inline bool HeaderValueHasBeenSet() const { return m_headerValueHasBeenSet; }

    /**
     * <p>Must be less than 2048 characters, and must not contain newline characters
     * ("\r" or "\n").</p>
     */
    inline void SetHeaderValue(const Aws::String& value) { m_headerValueHasBeenSet = true; m_headerValue = value; }

    /**
     * <p>Must be less than 2048 characters, and must not contain newline characters
     * ("\r" or "\n").</p>
     */
    inline void SetHeaderValue(Aws::String&& value) { m_headerValueHasBeenSet = true; m_headerValue = std::move(value); }

    /**
     * <p>Must be less than 2048 characters, and must not contain newline characters
     * ("\r" or "\n").</p>
     */
    inline void SetHeaderValue(const char* value) { m_headerValueHasBeenSet = true; m_headerValue.assign(value); }

    /**
     * <p>Must be less than 2048 characters, and must not contain newline characters
     * ("\r" or "\n").</p>
     */
    inline AddHeaderAction& WithHeaderValue(const Aws::String& value) { SetHeaderValue(value); return *this;}

    /**
     * <p>Must be less than 2048 characters, and must not contain newline characters
     * ("\r" or "\n").</p>
     */
    inline AddHeaderAction& WithHeaderValue(Aws::String&& value) { SetHeaderValue(std::move(value)); return *this;}

    /**
     * <p>Must be less than 2048 characters, and must not contain newline characters
     * ("\r" or "\n").</p>
     */
    inline AddHeaderAction& WithHeaderValue(const char* value) { SetHeaderValue(value); return *this;}

  private:

    Aws::String m_headerName;
    bool m_headerNameHasBeenSet = false;

    Aws::String m_headerValue;
    bool m_headerValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
